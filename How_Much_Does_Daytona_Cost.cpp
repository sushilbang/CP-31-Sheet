#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ff first
#define ss second
#define pb push_back

void solve(){
    int n,k; cin >> n >> k;
    vector<int> v(n);
    unordered_map<int,int> mp;

    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
        if(v[i] == k){
            cout << "YES\n" ;
            return;
        }
    }

    if(mp[k] >= 1){
        cout << "YES\n";
        return;
    }else{
        cout << "NO\n";
        return;
    }



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