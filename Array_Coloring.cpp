#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ff first
#define ss second
#define pb push_back

void solve(){
    int n; cin >> n;
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        int a;
        cin >> a;
        sum+=a;
    }
    if(sum%2) cout << "NO\n";
    else cout << "YES\n";
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