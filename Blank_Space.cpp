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
    int n; cin >> n;
    vector<int> a(n);
    int z = 0,mx = 1,cnt = 1;
    FOR(i,n){ 
        cin >> a[i];
        if(a[i] == 0) z++;
    }
    if(z == 0){
        cout << "0" << endl;
        return;
    }
    if(z == 1){
        cout << "1" << endl;
        return;
    }
    for(int i = 0 ; i < n - 1 ; i++){
        if(a[i] == 0 && a[i+1] == 0){
            cnt++;
            mx = max(mx,cnt);
        }else{
            cnt = 1;
        }
    }
    cout << mx << endl;
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