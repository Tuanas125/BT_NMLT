#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    //freopen("inp.inp", "r", stdin);
    //freopen("out.out", "w", stdout);
    ll n; cin >> n;
    map<string, ll> mp;
    for(ll i=1; i<=n; i++){
        string s;
        cin >> s;
        mp[s]=1;
        reverse(s.begin(), s.end());
        if(mp[s]==1 && s.size()%2==1){
            cout << s.size() << " " << s[s.size()/2];
            return 0;
        }
    }
}
