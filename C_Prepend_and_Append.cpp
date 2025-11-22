#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    cin.ignore();
    string s;
    getline(cin, s);

    int count = 0;
    for(int i=0; i<n/2; i++){
        if(s[i] != s[n-1-i]){
            count++;
        }else{
            break;
        }
    }

    cout << (n - (2*count)) << endl;
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