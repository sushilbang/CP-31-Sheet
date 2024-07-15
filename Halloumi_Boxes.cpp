#include <bits/stdc++.h>
#include <vector>

using namespace std;
#define ll long long
const int N = 1e5 + 10;

void solve()
{
	int n, k;
	cin >> n >> k;

	vector<int> v(n);

	for (int i = 0; i < n; i++)
		cin >> v[i];

	if (is_sorted(v.begin(), v.end()) || k > 1)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
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