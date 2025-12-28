#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n, q;
    cin >> n >> q;

    vector<ll>pre(n+1, 0);
    for(int i=1; i<=n; i++){
        int val;
        cin >> val;
        pre[i] = pre[i-1] + val;
    }

    ll totalSum = pre[n];

    for(int i=0; i<q; i++){
        int l, r;
        ll k;
        cin >> l >> r >> k;

        ll currentRangeSum = pre[r] - pre[l-1];
        ll newRangeSum = (ll)(r-l+1)*k;
        ll finalSum = totalSum - currentRangeSum + newRangeSum;

        if(finalSum%2==0){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
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