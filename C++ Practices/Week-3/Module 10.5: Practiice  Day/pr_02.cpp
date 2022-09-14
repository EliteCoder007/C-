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

    int sum = 0;
    for (int i = 0; i < n; i += 2)
    {
       sum += array[i]; 
    }
    cout << sum;
    
    
    return 0;
}