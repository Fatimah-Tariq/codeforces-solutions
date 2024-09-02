#include <bits/stdc++.h>
#define ll long long int
using namespace std;

 
int main()
{
    ll t;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        ll n, p = 1;
        cin >> n;
        for (ll j = 1; j <= n; j++)
        {
            cout << p;
            p += 2;
            if (j == n)
                cout << endl;
            else
                cout << " ";
        }
    }
    // cerr << "Time:" << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms" << endl;
    return 0;
}