//problem...

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    
    int checkValue;
    // cout << "Please enter the value your want to search : ";
    cin >> checkValue;

    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        if (array[i] == checkValue)
        {
            flag = 1;
            //How to show FOUND at idex position: 3, 7...?
            cout << "FOUND at index position: " << i << endl;
        }
        
    }

    if (flag == 0)
    {
        cout << "NOT FOUND" << endl;
    }
    

    
    
    return 0;
}