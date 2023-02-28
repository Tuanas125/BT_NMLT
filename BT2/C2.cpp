#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ll n;
    cin >> n;
    for (ll i=0; i<n; i++){
        for (ll j=0; j<n; j++){
            if (j<i) cout << " ";
            else cout << "*";
        }
        cout << "\n";
    }
}
