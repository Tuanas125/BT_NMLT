#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n%4==0){
        if(n%100==0 && n%400!=0) cout << "false";
        else cout << "true";
    }
    else cout << "true";
    return 0;
}
