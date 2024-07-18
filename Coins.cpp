#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define ff first
#define ss second
#define pb push_back
#define pob pop_back
#define mp make_pair

void print(vi &v)
{
    FOR(i, v.size())
        cout << v[i] << ' ';
    cout << endl;
}
void solve()
{
    ll n, k;
    cin >> n >> k;

    for (int x = 0; x <= 1; ++x)
    {
        if (n - x * k >= 0 && (n - x * k) % 2 == 0)
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