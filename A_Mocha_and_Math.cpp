#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin >> n;

    vector<int>v(n);
    for(int i=0; i<n; i++)cin >> v[i];

    int ans = v[0];
    for(int i=1; i<v.size(); i++){
        ans = ans & v[i];
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