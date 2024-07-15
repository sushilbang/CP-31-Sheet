#include <bits/stdc++.h>
using namespace std;

#define ll long long;
/*If number of all the elements are same then return "YES" , if no. of distinct elements >= 3 return "NO", else the can be only one case the number of distinct elements equals to 2 if the difference of the count of these elements is 0 if even n or 1 for odd n that is if((mpp.begin()->second - mpp.rend()->second) <= 1) then return "YES" else return "NO".*/
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mpp[v[i]]++;
    }
    if (mpp.size() >= 3)
    {
        cout << "NO" << endl;
        return;
    }

    if (abs(mpp.begin()->second - mpp.rbegin()->second) <= 1)
    {
        cout << "YES" << endl;
    }
    else
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