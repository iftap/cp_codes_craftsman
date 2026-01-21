#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s, e) for (int i = s; i < e; i++)
#define vll vector<ll>
#include <numeric>
#define sz size()

ll n, k, a, b;
// vll va,vb;
// bool ttt;

// 0000000111111
void ottarmarebap()
{
    cin >> n;
    string s;
    cin >> s;
    vll v(n, 0), pf(n, 0);
    fl(0, n)
    {
        if (s[i] == 'a')
            v[i] = 1;
        else
            v[i] = -1;
        pf[i + 1] = v[i] + pf[i];
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        ottarmarebap();
    }

    return 0;
}
