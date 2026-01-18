#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    bool sorted = true;
    for(int i=0; i<n-1; i++){
        if(s[i] > s[i+1]){
            sorted = false;
            break;
        }
    }

    if(sorted){
        cout << "Bob" << "\n";
        return;
    }

    cout << "Alice" << "\n";
    int count0 = 0;
    for(char c : s){
        if(c == '0')count0++;
    }

    vector<int>moves;
    for(int i=0; i<n; i++){
        char target = (i < count0) ? '0' : '1';

        if(s[i] != target){
            moves.push_back(i+1);
        }
    }

    cout << moves.size() << "\n";
    for(int idx : moves){
        cout << idx << " ";
    }
    cout << "\n";
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