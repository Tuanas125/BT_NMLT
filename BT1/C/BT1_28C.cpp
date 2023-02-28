#include <bits/stdc++.h>
using namespace std;

int main()
{
    int hour=12, tests=24;
    string status="midnight", temp="noon", check="pm", temp2="am";
    while(tests--){
        if(hour%13==0) hour++;
        cout << hour%13;
        if(hour%13==12){
            cout << " " << status << "\n";
            swap(status, temp);
            swap(check, temp2);
        }
        else cout << " " << check << "\n";
        hour++;
    }
    return 0;
}
