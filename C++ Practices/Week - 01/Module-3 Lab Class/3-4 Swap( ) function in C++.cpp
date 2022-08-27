#include<bits/stdc++.h>
using namespace std;

int main(){
    // int a = 10;
    // int b = 20;
    // swap(a, b);
    // cout << a << " " << b << endl;

    int a[] = {2,4,1,5,6};
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] > a[j])
            {
                // int temp = a[i];
                // a[i] = a[j];
                // a[j] = temp;
                swap(a[i], a[j]);
            }
            
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] <<" ";
    }
    
    
    return 0;
}