#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a[100005];

int main(){
    freopen("inp.inp", "r", stdin);
    //freopen("out.out", "w", stdout);
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        for(ll i=1; i<=n; i++){
            cin >> a[i];
            a[i]+=a[i-1];
        }
        bool check=true;
        for(ll i=1; i<=n; i++){
            if(a[i-1]==a[n]-a[i]){
                check=false;
                cout << "YES\n";
                break;
            }
        }
        if(check) cout << "NO\n";
    }
}
