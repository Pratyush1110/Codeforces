#include<bits/stdc++.h>
using namespace std;

void solve(){
    int count = 0;
    vector<vector<char>>grid(10, vector<char>(10));
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            cin >> grid[i][j];
            if(grid[i][j]!='.' && (i==0 || j==0 || i==9 || j==9)){
                count++;
            }else if(grid[i][j]!='.' && (i==1 || j==1 || i==8 || j==8)){
                count += 2;
            }else if(grid[i][j]!='.' && (i==2 || j==2 || i==7 || j==7)){
                count += 3;
            }else if(grid[i][j]!='.' && (i==3 || j==3 || i==6 || j==6)){
                count += 4;
            }else if(grid[i][j]!='.' && (i==4 || j==4 || i==5 || j==5)){
                count += 5;
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