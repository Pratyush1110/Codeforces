#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, q;
    cin >> n >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // FIX

    string s;
    getline(cin, s);

    int numq = 0;
    for(char c : s)
        if(c == '?') numq++;

    while(q--){
        string given;
        getline(cin, given);

        // parse "x v i" as integers
        int numx, numv, numi;
        stringstream ss(given);
        ss >> numx >> numv >> numi;

        string dup = s;
        int sum = 0;

        for(int i = dup.size() - 1; i >= 0; i--){
            char next = (i + 1 < dup.size() ? dup[i+1] : ' ');

            if(dup[i] == '?'){
                if(numi > 0){
                    dup[i] = 'I';
                    numi--;
                    sum += (next=='X' || next=='V') ? -1 : 1;
                }
                else if(numv > 0){
                    dup[i] = 'V';
                    numv--;
                    sum += 5;
                }
                else if(numx > 0){
                    dup[i] = 'X';
                    numx--;
                    sum += 10;
                }
            }
            else if(dup[i] == 'X'){
                sum += 10;
            }
            else if(dup[i] == 'V'){
                sum += 5;
            }
            else if(dup[i] == 'I'){
                sum += (next=='X' || next=='V') ? -1 : 1;
            }
        }

        cout << sum << "\n";
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
}
