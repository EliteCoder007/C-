//problem...

#include<bits/stdc++.h>
using namespace std;

void findMax(int *array, int n)
{
    int max = array[0];
    int index = 1;
    for (int i = 0; i < n; i++)
    {
        int tempMax = array[i];
        if (tempMax > max)
        {
            index++;
            max = tempMax;
        }
        
    }
    cout << "Max: " << max << "\tIndex: " << index << endl;
    
    
}

void findMin(int *array, int n)
{
    int min = array[0];
    int index = 1;
    for (int i = 0; i < n; i++)
    {
        int tempMin = array[i];
        if (tempMin < min)
        {
            min = tempMin;
            index++;
        }
        
    }
    cout << "Min: " << min << "\tIndex: " << index << endl;
    
}
int main(){
    int n;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    
    findMax(array, n);
    findMin(array, n);

    return 0;
}