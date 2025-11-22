#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
        if(v[i]==-1 && i!=0 && i!=(n-1)){
            v[i] = 0;
        }
    }

    if(v[0]==-1 && v[n-1]==-1){
        v[0]=0, v[n-1]=0;
    }else if(v[0]==-1){
        v[0] = v[n-1];
    }else if(v[n-1]==-1){
        v[n-1] = v[0];
    }

    cout << abs(v[n-1] - v[0]) << endl;
    for(auto it : v){
        cout << it << " ";
    }
    cout << endl;
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