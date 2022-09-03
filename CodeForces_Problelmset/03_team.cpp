#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int input[3];
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> input[j];
            if (input[j] == 1)
            {
                count = count + input[j];  
                //cout << count << endl;
            } 
        }
        if (count >= 2)
        {
            count2 = count2 + 1;
            //cout << count2 << endl;
        }
        
        
    }
    cout << count2;
    
    return 0;
}