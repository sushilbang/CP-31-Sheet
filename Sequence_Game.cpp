#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ff first
#define ss second
#define pb push_back

void print(vector<int> v)
{   cout << v.size() << "\n";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}

void solve()
{
    int n;
    cin >> n;
    vector<int> b(n);
    vector<int> a;
    for (int i = 0; i < n; i++)
        cin >> b[i];
    if (is_sorted(b.begin(), b.end()))
    {
        print(b);
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        a.pb(b[i]);
        if (b[i] > b[i + 1])
        {
            a.pb(b[i + 1]);
        }
    }
    a.pb(b[n - 1]);
    print(a);
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