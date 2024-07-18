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

/*
Note that (a1⊕x)⊕(a2⊕x)⊕...equals a1⊕a2⊕…⊕an if n is even, or a1⊕a2⊕…⊕an⊕x if n is odd. Then, if the length of the array is odd, you must print ⊕ of the whole array. And if the length is even, we can't change the value of the expression with our operation. It turns out that if ⊕ of the whole array is 0, we can output any number, but otherwise there is no answer.
*/

void print(vi &v){
    FOR(i,v.size()) cout << v[i] << ' ';
    cout << endl;
}
void solve(){
    int n; cin >> n;
    int a[n];
    int x = 0;
    FOR(i,n){
        cin >> a[i];
        x^=a[i];
    }
    if(x == 0){
        cout << 0 << endl;
        return;
    }else{
        if(n%2){
            cout << x << endl;
        }else{
            cout << -1 << endl;
        }
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