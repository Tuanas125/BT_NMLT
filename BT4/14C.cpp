#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[102], b[102];

int main(){
    //freopen("inp.inp", "r", stdin);
    //freopen("out.out", "w", stdout);
    ll n; cin >> n;
    for(ll i=1; i<=n; i++) cin >> a[i];
    for(ll i=1; i<=n+1; i++) cin >> b[i];
    sort(a+1, a+1+n);
    sort(b+1, b+2+n);
    for(ll i=1; i<=n+1; i++){
        if(a[i]!=b[i]){
            cout << b[i];
            return 0;
        }
    }
}
