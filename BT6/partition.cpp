#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void doitien(ll n, vector<ll> a){
    if(n==0){
        for(ll i=0; i<a.size(); i++)
            cout << a[i] << " ";
        cout << "\n";
        return;
    }
    for(ll i=1; i<=n; i++){
        if(a.empty()||i>=a.back()){
            a.push_back(i);
            doitien(n-i, a);
            a.pop_back();
        }
    }
}

int main(){
    ll n;
    cin >> n;
    vector<ll> a;
    doitien(n,a);
}
