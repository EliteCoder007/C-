#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    int x = 800;
    cin >> N;
    int y = 200;
    if (N>15)       
    {
        y = 200 * (N/15);
        x *= N;
        int back = x - y;
        cout<<back;
    }

    return 0;
}