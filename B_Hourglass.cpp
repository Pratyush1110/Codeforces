#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll s, k, m;
    cin >> s >> k >> m;

    if(s<k){
        cout << s - min(m%k, s) << "\n";
    }else{
        if(((m/k) % 2) == 0){
            cout << s - (m%k) << "\n";
        }else{
            cout << k - (m%k) << "\n";
        }
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