#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin >> n;

    vector<vector<ll>>v(n);
    for(int i=0; i<n; i++){
        ll m;
        cin >> m;
        for(int j=0; j<m; j++){
            ll val;
            cin >> val;
            v[i].push_back(val);
        }
    }

    ll global_minimum = INT_MAX;
    vector<ll>s(n);
    for(int i=0; i<n; i++){
        ll m = v[i].size();
        ll smallest=INT_MAX, second_smallest=INT_MAX;
        for(int j=0; j<m; j++){
            global_minimum = min(global_minimum, v[i][j]);
            if(v[i][j] < smallest){
                second_smallest = smallest;
                smallest = v[i][j];
            }else if(v[i][j] < second_smallest){
                second_smallest = v[i][j];
            }
        }
        s[i] = second_smallest;
    }

    ll mini = *min_element(s.begin(), s.end());
    ll ans = 0;
    for(int i=0; i<s.size(); i++){
        ans += s[i];
    }
    ans -= mini;
    ans += global_minimum;

    cout << ans << "\n";
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