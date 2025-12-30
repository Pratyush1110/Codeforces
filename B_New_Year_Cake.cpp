#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a, b;
    cin >> a >> b;

    int bigger = -1, smaller = -1;
    if(a > b){
        bigger = a;
        smaller = b;
    }else{
        bigger = b;
        smaller = a;
    }
    int og_smaller = smaller;
    int og_bigger = bigger;

    //firstlayer could be the smaller one
    int index1 = 0;
    while(true){
        int num = pow(2, index1);
        if(num > smaller && num > bigger){
            break;
        }

        if(index1%2==0){
            if(smaller >= num){
                smaller -= num;
            }else{
                break;
            }
        }else if(index1%2==1){
            if(bigger >= num){
                bigger -= num;
            }else{
                break;
            }
        }

        index1++;
    }
    bigger = og_bigger, smaller = og_smaller;

    //firstlayer could be the bigger one
    int index2 = 0;
    while(true){
        int num = pow(2, index2);
        if(num > smaller && num > bigger){
            break;
        }

        if(index2%2==1){
            if(smaller >= num){
                smaller -= num;
            }else{
                break;
            }
        }else if(index2%2==0){
            if(bigger >= num){
                bigger -= num;
            }else{
                break;
            }
        }

        index2++;
    }

    int ans = max(index1, index2);

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