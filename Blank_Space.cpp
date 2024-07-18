#include<bits/stdc++.h>
using namespace std;
#define mod 1e9+7
#define FOR(a,c)   for ( int (a)=0; (a)<(c); (a)++)
#define FORL(a,b,c)  for ( int (a)=(b); (a)<=(c); (a)++)
#define FORR(a,b,c)  for (  int (a)=(b); (a)>=(c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define ff first
#define ss second
#define pb push_back
#define pob pop_back
#define mp make_pair

void print(vi &v){
    FOR(i,v.size()) cout << v[i] << ' ';
    cout << endl;
}
void solve(){
    int n;
    cin >> n;
    int a[n];
    int cnt = 0, ans = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] == 0)
        {
            cnt++;
        }
        else
        {
            ans = max(ans, cnt);
            cnt = 0;
        }
    }
    cout << max(ans, cnt) << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}