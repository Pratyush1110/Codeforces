#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin >> n;

    int count0 = 0, count1 = 0;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
        if(v[i]==0){
            count0++;
        }else if(v[i]==1){
            count1++;
        }
    }

    if(count0 == 0){
        cout << "NO" << "\n";
        return;
    }

    if(count0 == n){
        cout << "NO" << "\n";
        return;
    }

    if(count0>=2 && count1==0){
        cout << "NO" << "\n";
        return;
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