#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<vector<int>> mat(n, vector<int>(n));

    int value = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mat[i][j] = value++;
        }
    }

    int ans = INT_MIN;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int cur = mat[i][j];
            if(i>0){
                cur += mat[i-1][j];
            }
            if(j>0){
                cur += mat[i][j-1];
            }
            if(j<n-1){
                cur += mat[i][j+1];
            }
            if(i<n-1){
                cur += mat[i+1][j];
            }
            ans = max(ans, cur);
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