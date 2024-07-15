#include <bits/stdc++.h>
using namespace std;

#define ll long long;
// Consider the remainder from dividing n
//  by 3
//  before the first move. If it is equal to 1
//  or 2
// , then Vanya can make the number n
//  divisible by 3
//  after the first move, i.e. he wins. Let the remainder be 0
// , then Vanya must change the number after which it will not be divisible by 3
// . Then Vova can do the same operation as Vanya and make it divisible by 3
//  again. This will go on indefinitely, so Vova wins.
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