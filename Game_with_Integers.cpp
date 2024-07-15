#include <bits/stdc++.h>
using namespace std;

#define ll long long;

void solve()
{
    int n, a = 10;
    cin >> n;

    if (n % 3)
    {
        cout << "First" << endl;
        return;
    }
    else
    {
        cout << "Second" << endl;
        return;
    }
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