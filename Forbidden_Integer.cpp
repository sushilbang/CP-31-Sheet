#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ff first
#define ss second
#define pb push_back

/*
The problem is about considering the least amount of cases possible. I propose the following options.

If x≠1, then you can always print n ones. So the answer is YES.

If k=1, then no integer is available, so the answer is NO.

If k=2, then only 2 is available, so you can only collect even n. So if it's odd, the answer is NO.

Otherwise, you can always collect n with the following construction: if n is even then take 2, otherwise take 3
. Then take ⌊n/2⌋−1 twos. You can see that an even n only uses twos, so it fits the previous check. If it's odd, then k is at least, so 3 is allowed to take.

Overall complexity: O(n) per testcase.
*/

void solve(){
    int n,k,x; cin >> n >> k >> x;
    if(x!=1){
        cout << "YES" << endl;
        cout << n << endl;
        for (int i = 0; i < n; ++i){
            cout << 1 << " ";
        }
        cout << endl;
    }else if( k == 1 || (k == 2 && n%2)){ // if(x is 1 and k is 1) or (x is 1 and k is 2 and n is not even)
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl; // (x is 1 and k can be anything and n can be even or odd)
        cout << n / 2 << endl;
        int value = (n % 2 == 1) ? 3 : 2; // ex, if n = 17 then value = 3 and ans is 3 2 2 2 2 2 2 2
        cout << value << " ";
        for (int i = 0; i < (n / 2) - 1; i++) {
            cout << 2 << " ";
        }
        cout << endl;
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