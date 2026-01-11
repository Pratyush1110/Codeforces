#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;

    int numAB=0, numBA=0;
    for(int i=0; i<s.size()-1; i++){
        if(s[i]=='a' && s[i+1]=='b')numAB++;
        if(s[i]=='b' && s[i+1]=='a')numBA++;
    }

    if(numAB==numBA){
        cout << s << "\n";
        return;
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