#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    if(n==0){
        cout << 0 << endl;
        return;
    }
    if(n%2!=0){
        cout << 0 << endl;
        return;
    }
    if(n>4){
        cout << ((n/4) + 1) << endl;
        return;
    }else{
        int ans = 0;
        if(n==4) ans =2;
        else if(n==2) ans = 1;
        cout << ans << endl;
        return;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}