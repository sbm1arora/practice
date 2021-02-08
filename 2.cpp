#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;

    while (n--)
    {
        ll num;
        cin >> num;

        ll num_tens = 0;

        for (ll i = 5; i <= num; i *= 5)
            num_tens = num / i;

        cout << num_tens << endl;
    }
}