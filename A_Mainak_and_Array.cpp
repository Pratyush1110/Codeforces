#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    int maxi=INT_MIN, mini=INT_MAX, adj=INT_MIN;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
        maxi = max(maxi, v[i]);
        mini = min(mini, v[i]);
    }

    if(n==1){
        cout << 0 << "\n";
        return;
    }

    for(int i=1; i<n; i++){
        adj = max(adj, v[i-1] - v[i]);
    }

    int a=v[0], b=v[n-1];
    int regular = b-a;
    int a1= maxi-a;
    int b1= b-mini;

    int ans = max(max(regular, adj), max(a1, b1));

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