#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int>a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    vector<int>ans;
    ans.push_back(a[0]);

    for(int i = 1; i < n; i++) {
        if(a[i] < a[i-1]) {
            ans.push_back(1);
        }
        ans.push_back(a[i]);
    }

    cout << ans.size() << endl;
    for(int it : ans){
        cout << it << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
