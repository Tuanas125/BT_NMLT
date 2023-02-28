#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ll n;
    cin >> n;
    for (ll i=0;i<n;i++){
        for (ll j=0; j<2*n-1; j++){
            if (j<n-i-1 || j>n-1+i) cout << " ";
            else cout << "*";
        }
        cout << "\n";
    }
}
