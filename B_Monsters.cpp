#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n, k;
    cin >> n >> k;

    vector<ll>a(n);
    for(ll i=0; i<n; i++){
        cin >> a[i];
    }

    vector<pair<ll, ll>>v;
    for(ll i=0; i<n; i++){
        ll r = a[i]%k;
        if(r==0) r = k;
        v.push_back({r, i+1});
    }

    sort(v.begin(), v.end(), [&](auto x, auto y){
        if(x.first != y.first) return x.first > y.first;
        return x.second < y.second;
    });

    for(auto it : v){
        cout << it.second << " ";
    }
    cout << "\n";
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