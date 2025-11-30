#include<bits/stdc++.h>
using namespace std;

int parity(int n){
    if(n%2==0){
        return 1;
    }else{
        return -1;
    }
}

void solve(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int count = 0;
    for(int i=0; i<n-1; i++){
        if(parity(v[i]) == parity(v[i+1])){
            count++;
        }
    }

    cout << count << endl;
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