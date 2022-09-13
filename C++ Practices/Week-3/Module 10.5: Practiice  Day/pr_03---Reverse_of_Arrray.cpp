//Must remeber about pointer and condition...

#include<bits/stdc++.h>
using namespace std;

void arrayReverse(int *array, int n){
    for (int i = 0; i < (n - 1) / 2; i++)
    {
        int temp = array[i];
        array[i] = array[n - 1 - i];
        array[n - 1 - i] = temp;
    }
    
}

int main(){
    int n;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    arrayReverse(array, n);
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    

    return 0;
}