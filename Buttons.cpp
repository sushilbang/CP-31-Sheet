#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ff first
#define ss second
#define pb push_back

//Both of them will first try to finish the common button

void solve(){
    int a, b, c; cin >> a >> b >> c;
    if(c%2){
        if(b>a) cout << "Second\n";
        else cout << "First\n"; 
    }else{
        if(a>b) cout << "First\n";
        else cout << "Second\n";
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