#include <bits/stdc++.h>
using namespace std;

#define ll long long;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int x = n;

    while (x--)
    {
        for (int i = 1; i < n - 1; i++)
        {
            if (v[i] > v[i + 1] && v[i - 1] < v[i])
            {
                swap(v[i], v[i + 1]);
            }
        }

        if (is_sorted(v.begin(), v.end()))
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
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