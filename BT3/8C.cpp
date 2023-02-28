#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    //freopen("inp.inp", "r", stdin);
    //freopen("out.out", "w", stdout);
    ll n, ans=0; cin >> n;
    vector<ll> t;
    for(ll i=1; i<=n; i++){
        ll x; cin >> x;
        t.push_back(x);
    }
    sort(t.begin(), t.end());
    for(ll i=0; i<n; i++){
        ans+=(n-i-1)*t[i];
    }
    cout << ans;
}
