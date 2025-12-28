#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin >> n;
    string s;
    cin >> s;
 
    long long longest_substring_length = 1;
    long long current_substring_length = 1;
 
    for (int i = 1; i < n; i++){
        if (s[i] == s[i - 1])
            current_substring_length++;
        else{
            longest_substring_length = max(longest_substring_length, current_substring_length);
            current_substring_length = 1;
        }
    }
 
    longest_substring_length = max(longest_substring_length, current_substring_length);
 
    cout << longest_substring_length + 1 << endl;
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