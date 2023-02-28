#include <bits/stdc++.h>
using namespace std;

int main()
{
    while(true){
        int n; cin >> n;
        if(n>=0 && n%5==0) cout << n/5 << "\n";
        else {
            cout << "-1\nBye";
            break;
        }
    }
    return 0;
}
