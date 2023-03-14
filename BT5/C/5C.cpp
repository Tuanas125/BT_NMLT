#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPrime(ll n)
{
    for(ll i = 2; i <= sqrt(n); i++)
        if(n % i == 0)
            return false;
    return true;
}

int main(){
    ll n;
    cin >> n;
    for(ll i = 2; i < n; i++)
        if(isPrime(i))
            cout << i << ' ';
    return 0;
}
