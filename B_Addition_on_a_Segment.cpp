#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int>b(n);
    int sum = 0;
    for(int i=0; i<n; i++){
        cin >> b[i];
        sum += b[i];
    }

    if(sum==n){
        cout << 1 << endl;
        return;
    }

    sort(b.begin(), b.end());

    int index = 1;
    for(int i=0; i<n; i++){
        if(b[i]!=0){
            break;
        }else{
            index++;
        }
    }

    cout << n - index + 1 << endl;
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