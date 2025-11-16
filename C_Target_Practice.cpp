#include<bits/stdc++.h>
using namespace std;

void solve(){
    int count = 0;
    vector<vector<char>>grid(10, vector<char>(10));
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            cin >> grid[i][j];
            if(grid[i][j]!='.'){
                int point = min({i,j,9-i,9-j});
                count += point+1;
            }
        }
    }
    cout << count << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}