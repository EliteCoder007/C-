#include<bits/stdc++.h>
using namespace std;

int main(){
    int problem[4];
    int success = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> problem[i];
    }

    for (int i = 0; i < 4; i++)
    {
        if (problem[i] >= 10)
        {
            success++;
        }
        
    }
    cout << success;
    
    
    return 0;
}