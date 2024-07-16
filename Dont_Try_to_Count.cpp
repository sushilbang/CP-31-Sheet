#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ff first
#define ss second
#define pb push_back

/*Note that the answer is always not greater than 5. When n=1, m=25, the answer is either 5 or −1, it is easy to see that the answer cannot be greater.
This allows us to simply iterate over the number of operations, each time checking if s occurs in x. The time complexity of this solution is O(25⋅n⋅m).*/

void solve(){
    int n , m;
    string x , s;
    cin >> n >> m;
    cin >> x >> s;
    int i = 0;
    int ans = -1;
    while(i<=5){
        if(x.find(s) != string::npos){
            ans = i;
            break;
        }
        x.append(x);
        i++;
    }
    cout << ans << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    // string x = "append";
    // x.append(x);
    // cout << x << endl;
    return 0;
}