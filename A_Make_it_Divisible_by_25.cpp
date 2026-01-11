#include<bits/stdc++.h>
using namespace std;

int minOperations(string s, string op){
    int ans = 0;
    int index = s.size()-1;
    while(index>=0 && s[index]!=op[1]){
        index--;
        ans++;
    }
    index--;
    while(index>=0 && s[index]!=op[0]){
        index--;
        ans++;
    }
    return ans;
}

void solve(){
    string s;
    cin >> s;
    string og = s;

    int min00 = minOperations(s, "00");
    int min25 = minOperations(s, "25");
    int min50 = minOperations(s, "50");
    int min75 = minOperations(s, "75");
    
    int ans = INT_MAX;
    ans = min(ans, min(min(min00, min25) , min(min50, min75)));

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