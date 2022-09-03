#include<bits/stdc++.h>
using namespace std;

int main(){
    int watermelon_in_kilos;
    cin >> watermelon_in_kilos;

    if (watermelon_in_kilos % 2 == 0 && watermelon_in_kilos > 2)
    {
        cout <<"YES";
    }
    else
    {
        cout <<"NO";
    }
    
    return 0;
}