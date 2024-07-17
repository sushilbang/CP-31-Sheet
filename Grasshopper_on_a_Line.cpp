#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ff first
#define ss second
#define pb push_back

void solve(){
    int x,k; cin >> x >> k;
    if(x<k || x%k){
        cout << 1 << endl;
        cout << x << endl;
        return;
    }else{
        int rem = x/k - 1;
        cout << 2 << endl;
        cout << k*rem - 1 << " " << k+1 << endl;
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