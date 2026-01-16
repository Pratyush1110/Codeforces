#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n, k, q;
    cin >> n >> k >> q;

    vector<ll>v(n);
    for(ll i=0; i<n; i++){
        cin >> v[i];
    }

    ll ans = 0;

    ll index = 0;
    ll startingIndex = 0;
    while(index < n){
        if(v[index]<=q){
            index++;
        }else{
            ll p = index - startingIndex;
            if(p>=k){
                ll t = abs(p-k) + 1;
                ans += ((t)*(t+1))/2;
            }
            index++;
            startingIndex = index;
        }
    }
    ll p = index - startingIndex;
    if(p>=k){
        ll t = abs(p-k) + 1;
        ans += ((t)*(t+1))/2;
    }

    cout << ans << "\n";
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