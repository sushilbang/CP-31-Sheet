#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ff first
#define ss second
#define pb push_back

void input(vector<int> &v){
    int n = v.size();
    for(int i = 0 ; i < n ; i++) cin >> v[i];
} 

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    input(v);
    int mn = INT_MAX;
    if(!is_sorted(v.begin(),v.end())){
        cout << "0\n";
        return;
    }
    for(int i = 0 ; i < n-1 ; i++){
        mn = min(mn,abs(v[i]-v[i+1]));
    }
    cout << mn/2 + 1 << "\n";
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