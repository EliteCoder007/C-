#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, h;
    cin >> a >> b >> h;
    
    int areaOfTrapezoid;
    if (h % 2 == 0)
    {
        areaOfTrapezoid = .5 * (a + b) * h;
        cout << areaOfTrapezoid;
    }
    
    
    

    return 0;
}