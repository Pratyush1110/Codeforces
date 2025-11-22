#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    int aOne=0, bOne=0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]==1) aOne++;
    }
    for(int i=0; i<n; i++){
        cin >> b[i];
        if(b[i]==1) bOne++;
    }

    for(int i=0; i<n; i++){
        if(a[i] != b[i]){
            if(i%2==0){
                if(aOne%2==0){
                    aOne -= a[i]; aOne += b[i];
                    bOne -= b[i]; bOne += a[i];
                    swap(a[i], b[i]);
                }
            }else{
                if(bOne%2==0){
                    aOne -= a[i]; aOne += b[i];
                    bOne -= b[i]; bOne += a[i];
                    swap(a[i], b[i]);
                }
            }
        }
    }

    int xorA = 0, xorB = 0;
    for(int i=0; i<n; i++){
        xorA = xorA ^ a[i];
    }
    for(int i=0; i<n; i++){
        xorB = xorB ^ b[i];
    }

    if(xorA == xorB){
        cout << "Tie" << endl;
        return;
    }
    else{
        if(xorA > xorB){
            cout << "Ajisai" << endl;
        }else{
            cout << "Mai" << endl;
        }
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