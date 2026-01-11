#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin >> n;

    ll countZeros = 0;
    ll countOnes = 0;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
        if(v[i]==0)countZeros++;
        else if(v[i]==1)countOnes++;
    }

    ll ways = pow(2, countZeros) * countOnes;
    cout << ways << "\n";
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