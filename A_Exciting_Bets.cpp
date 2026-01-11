#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll a, b;
    cin >> a >> b;

    if(b > a){
        swap(a, b);
    }

    if(a==b){
        cout << 0 << " " << 0 << "\n";
        return;
    }else{
        ll gcd = a-b;
        ll moves = min(b%gcd, gcd-(b%gcd));
        cout << gcd << " " << moves << "\n";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}