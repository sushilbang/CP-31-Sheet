#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ff first
#define ss second
#define pb push_back

void solve()
{
    int n, a, sum = 0;
    cin >> n;

    for (int i = 0; i < n - 1; i++)
    {
        cin >> a;
        sum += a;
    }

    cout << -1 * sum << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}