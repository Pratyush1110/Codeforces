#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int count = 0;
    for(int i=0; i<n-1; i++){
        int b;
        cin >> b;
        count += b;
    }
    cout << -count << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}