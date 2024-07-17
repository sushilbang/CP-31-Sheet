#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ff first
#define ss second
#define pb push_back

/*
First, if all numbers are equal, then there is no answer (since a is divisible by a, if both arrays are non-empty,then c1 is a divisor of b1).

Second, if a is divisible by b and they are both natural numbers, then the following equality holds: b≤a (by definition, if a is divisible by b, then a can be represented as kb˙, where k is a natural number).

Now we can place all instances of the smallest number into b, and all other numbers into c. It can be seen that such a construction always gives a valid answer.
*/

void input(vector<int> &a){
    for(int i = 0 ; i < a.size() ; i++){
        cin >> a[i];
    }
}

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    input(a);
    sort(a.begin(),a.end());
    if(a[0] == a[n-1]){
        cout << "-1\n";
        return;
    }
    int it = 0;
    while(a[it] == a[0]) it++;
    cout << it << " " << n-it << "\n";
    for(int i = 0 ; i < it ; i++){ cout << a[i] << " ";} cout << "\n";
    for(int i = it ; i < n ; i++){ cout << a[i] << " ";} cout << "\n"; 
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