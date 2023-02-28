#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isprime (ll n){
    if (n<2) return false;
    for (ll i=2; i<=n/2; i++){
        if (n%i==0) return false;
    }
    return true;
}
int main(){
    ll n;
    cin >> n;
    if (isprime(n)) cout << "yes";
    else cout << "no";
}
