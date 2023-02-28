#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    string s;
    cin >> s;
    ll n=s.length();
    vector<string> cnt;
    for (ll i=0; i<n-1; i++){
        string tmp=s;
        tmp.erase(tmp.begin()+i);
        for (ll j=i+1; j<n; j++){
            string str=tmp;
            str.erase(str.begin()+j-1);
            cnt.push_back(str);
        }
    }
    long long res=0;
    sort(cnt.begin(),cnt.end());
    for (ll i=0; i<cnt.size()-1; i++){
        if (cnt[i]!=cnt[i+1]) res++;
    }
    cout << res+1;
}
