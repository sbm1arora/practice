#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll max(ll a, ll b, ll c, ll d)
{
    return max(a, max(b, max(c, d)));
}

ll max(ll a, ll b, ll c)
{
    return max(a, max(b, c));
}

int main()
{
    ll n;
    cin >> n;

    while(n--)
    {
        ll a, b, ans;
        cin >> a >> b;

        ll p, q, r, s;

        p = a % 10;
        q = b % 10;
        r = (a / 10) % 10;
        s = (b / 10) % 10;

        if(r != 0 && s != 0)
        {
            ans = max(a + b, p*10 + r*10 + q + s, r*10 + s * 10 + p + q, q * 10 + s * 10 + p + r);
        }
        else if(s == 0 || r == 0)
        {
            s = max(s, r);
            if(s == 0)
            {
                ans = max(a + b, p *10 + q, q *10 + p);
                continue;
            }

            ans = max(a + b, q * 10 + p + s, p * 10 + q + s);
        }

        cout << ans << endl;

    }
}