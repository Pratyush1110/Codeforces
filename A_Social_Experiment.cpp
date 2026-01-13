#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin >> n;

    int ans = -1;
    if(n==2 || n==3){
        ans = n;
    }else if(n%2!=0){
        ans = 1;
    }else{
        ans = 0;
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