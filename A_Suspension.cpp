#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, y, r;
    cin >> n;
    cin >> y >> r;

    int ans = 0;

    while(n > 0){
        if(r == 0){
            break;
        }
        if(r > 0){
            r--;
            n--;
            ans += 1;
        }
    }

    if(n==0){
        cout << ans << endl;
        return;
    }

    while(n > 0){
        if(y <= 1){
            break;
        }
        if(y > 1){
            y -= 2;
            n--;
            ans += 1;
        }
    }

    cout << ans << endl;
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