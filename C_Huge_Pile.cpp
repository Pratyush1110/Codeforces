#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n, k;
    cin >> n >> k;

    ll num1 = floor(n/2.0);
    ll num2 = ceil(n/2.0);

    if(num1==k || num2==k){
        cout << 1 << "\n";
        return;
    }

    ll time = 1;

    while(num1>k && num2>k){
        if(num1%2!=0){
            num2 = ceil(num1/2.0);
            num1 = floor(num1/2.0);
        }else{
            num1 = floor(num2/2.0);
            num2 = ceil(num2/2.0);
        }
        time++;

        if(num1==k || num2==k){
            cout << time << "\n";
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