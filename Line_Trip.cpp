#include <bits/stdc++.h>
#include <vector>

using namespace std;
#define ll long long
const int N = 1e5 + 10;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int maxi = v[0];
    for (int i = 0; i < n - 1; i++)
    {
        maxi = max(maxi, v[i + 1] - v[i]);
    }
    maxi = max(maxi, 2 * (x - v[n - 1]));
    cout << maxi << endl;
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