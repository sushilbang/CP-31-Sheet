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

/*
Hint 1: The value of b is always non-decreasing, and the value of a−b is always non-increasing . It is possible to move from (a,b) to (c,d) if and only if d≥b and a−b≥c−d, since the value of b is always non-decreasing and the value of a−b is always non-increasing.

If it is possible, the answer is (d−b)+((a+d−b)−c) . One possible way is (a,b)→(a+d−b,d)→(c,d).

Another way to understand this: (a,b)→(a+d−b,d)→(c,d) is always a valid path if it is possible to move from (a,b) to (c,d). So first let a←a+(d−b) and b←d, then the answer only depends on a and c.
*/

void print(vi &v)
{
    FOR(i, v.size())
    cout << v[i] << ' ';
    cout << endl;
}
void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (b <= d && c <= a + d - b)
    {
        cout << (d - b) + (a + d - b - c) << endl;
    }
    else
    {
        cout << "-1" << endl;
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