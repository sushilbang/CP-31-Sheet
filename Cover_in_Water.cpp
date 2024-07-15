#include <bits/stdc++.h>
#include <vector>

using namespace std;
#define ll long long
const int N = 1e5 + 10;

void solve()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    int count = 0, sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (count == 2)
        {
            cout << "2" << endl;
            return;
        }
        if (s[i] == '.' && s[i + 1] == '.')
        {
            count++;
        }
        if ((s[i] == '.' && s[i + 1] == '#') && count < 2)
        {
            sum += count + 1;
            count = 0;
        }
    }
    if (count == 2)
    {
        cout << "2" << endl;
        return;
    }
    if(s[n-1] == '.'){
        sum += (count + 1);
    }
    cout << sum << endl;
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