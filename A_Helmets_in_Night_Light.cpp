#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n, p;
    cin >> n >> p;

    vector<int>a(n), b(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        cin >> b[i];
    }

    vector<pair<int, int>>v(n);
    for(int i=0; i<n; i++){
        v[i] = {b[i], a[i]};
    }
    sort(v.begin(), v.end());

    ll total_cost = p;
    ll to_be_notified = n-1;
    ll index = 0;
    while(to_be_notified>0 && index<n){
        if(v[index].first >= p){
            break;
        }

        ll can_notify = min(to_be_notified, (ll)v[index].second);

        total_cost += can_notify*v[index].first;
        to_be_notified -= can_notify;
        index++;
    }

    if(to_be_notified>0){
        total_cost += p*to_be_notified;
    }

    cout << total_cost << "\n";
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