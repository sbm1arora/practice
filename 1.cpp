#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(string s1, string s2)
{
}

int find(string &s, vector<int> &done, vector<string> &vrr)
{
    int ans = s.size();
    for (int i = 0; i < vrr.size(); i++)
    {
        if (find(done.begin(), done.end(), i) == done.end())
        {

            if (check(s, vrr[i]))
            {
                string a = s + vrr[i];
                done.push_back(i);
                ans = max(ans, find(a, done, vrr));
                done.pop_back();
            }
        }
    }
    return ans;
}

int solve(vector<string> &vrr)
{
    vector<int> done;
    int ans = 0;
    for (int i = 0; i < vrr.size(); i++)
    {
        done.clear();
        done.push_back(i);
        string curr = vrr[i];
        ans = max(ans, find(curr, done, vrr));
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<string> vrr;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        vrr.push_back(s);
    }
}