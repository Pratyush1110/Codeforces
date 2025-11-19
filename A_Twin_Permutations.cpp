#include<bits/stdc++.h>
using namespace std;
/*
    4 3 2 1 6 5
    3 4 5 6 1 2
*/
void solve(){
    int n;
    cin >> n;
    vector<int>a(n), b(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<n; i++){
        b[i] = (n+1) - a[i];
    }
    
    if(n==1)b=a;
    if(n==2){
        reverse(a.begin(), a.end());
        b = a;
    }
    for(auto it : b){
        cout << it << " ";
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}