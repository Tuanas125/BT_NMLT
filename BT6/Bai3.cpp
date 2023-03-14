#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, k, a[102];
void pre(){
    for(ll i=1; i<=k; i++) a[i]= i;
}
void solve(int i){
    for(ll j=a[i-1]+1; j<=n-k+i; j++){
        a[i]=j;
        if(i==k){
            for(ll l=1; l<=k; l++){
                cout << char(a[l]+'a'-1);
            }
            cout << "\n";
        }
        else solve(i+1);
    }
}
int main(){
    cin >> n >> k;
    pre();
    solve(1);
    return 0;
}
