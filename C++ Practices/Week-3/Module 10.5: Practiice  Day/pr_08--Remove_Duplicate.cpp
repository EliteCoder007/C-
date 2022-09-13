//problem...

#include<bits/stdc++.h>
using namespace std;

void removeDuplicate(int *array, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (array[i] == array[j])
            {
                if (array[i] == n - 1)
                {
                    n--;
                }
                else
                {
                    for (int k = array[i] + 1; k <= n - 1; k++)
                    {
                        array[i - 1] = array[i];
                    }
                    n--;
                    
                }
                
                
            }
            
        }
        
        
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

    removeDuplicate(array, n);
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    
    
    return 0;
}