#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ll n;
    cin >> n;
    for (ll i=1;i<=n;i++){
        for (ll j=i;j<=n;j++){
            cout << j << " ";
        }
        for (ll j=1;j<=i-1;j++){
            cout << j << " ";
        }
        cout << "\n";
    }
}
