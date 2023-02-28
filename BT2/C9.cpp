#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ll n;
    cin >> n;
    ll a,b;
    ll mina=LLONG_MAX;
    ll minb=LLONG_MAX;
    for (ll i=0; i<n; i++){
        cin >> a >> b;
        if (a<mina) mina=a;
        if (b<minb) minb=b;
    }
    cout << mina*minb;
}
