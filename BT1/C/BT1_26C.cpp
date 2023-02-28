#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int mi=INT_MAX, ma=INT_MIN, t(0);
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        t+=x;
        mi=min(mi, x);
        ma=max(ma, x);
    }
    cout << "Mean: " << double(t)/n << "\n";
    cout << "Max: " << ma << "\n";
    cout << "Min: " << mi;
    return 0;
}
