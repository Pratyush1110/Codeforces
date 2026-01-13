#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin >> n;
    ll og_n = n;

    if(n==1){
        cout << 0 << "\n";
        return;
    }

    ll ans = 0;

    while(n>1){
        if(n%6==0){
            n = n/6;
            ans++;
        }else if(n%2!=0 && n%3==0){
            n = n*2;
            n = n/6;
            ans += 2;
        }else{
            break;
        }

        if(n==1){
            cout << ans << "\n";
            return;
        }
    }

    cout << -1 << "\n";
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