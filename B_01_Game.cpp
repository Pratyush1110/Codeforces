#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    string s;
    cin >> s;

    ll countZero=0, countOne=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='0'){
            countZero++;
        }else{
            countOne++;
        }
    }

    ll operations = min(countOne, countZero);

    if(operations%2!=0){
        cout << "DA" << "\n";
    }else{
        cout << "NET" << "\n";
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