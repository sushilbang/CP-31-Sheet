#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ff first
#define ss second
#define pb push_back

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    int cnt1 = 0, cnt2 = 0;
    int sum = 0, ans = 0;
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
        sum+=v[i];
        if(v[i] == 1) cnt2++;
        else cnt1++;
    }

    while(sum<0){
        cnt1--;
        cnt2++;
        sum = cnt2 - cnt1;
        ans++;
    }

    if(cnt1%2) ans++;

    cout << ans << endl;
    
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