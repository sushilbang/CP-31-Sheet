#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ff first
#define ss second
#define pb push_back

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mn = min(mn, abs(a[i]));
    }
    cout << mn << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}