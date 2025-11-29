#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    ll start = v[0];
    ll end = v[n-1];

    if(start == end){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
        cout << end << " ";
        for(int i=0; i<n-1; i++){
            cout << v[i] << " ";
        }
        cout << endl;
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