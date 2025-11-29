#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int>a(2*n);
    map<int, int>mp;
    for(int i=0; i<2*n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }

    int ans = 0;
    int numOdd=0, numEven=0;
    for(auto it : mp){
        if(it.second %2 == 0){
            numEven++;
        }else{
            numOdd++;
        }
    }

    if(numEven == mp.size()){
        cout << 0 << endl;
        return;
    }

    cout << "Working" << endl;
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