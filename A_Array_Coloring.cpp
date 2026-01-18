#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin >> n;

    vector<pair<int, int>>v(n);
    for(int i=0; i<n; i++){
        cin >> v[i].first;
        if(i%2==0){
            v[i].second = 0;
        }else{
            v[i].second = 1;
        }
    }
    
    sort(v.begin(), v.end());
    for(int i=0; i<n-1; i++){
        if(v[i].second == v[i+1].second){
            cout << "NO" << "\n";
            return;
        }
    }
    cout << "YES" << "\n";
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