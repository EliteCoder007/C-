/*For Iteration Redundancy Problem we have to implement int flag = 0;
if(flag == 0) break;
for inner loop redundancy we have to change the condition of inner loop by n - i...
*/

#include<bits/stdc++.h>
using namespace std;

void printArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl; 
}

int main(){
    int size;
    cin >> size;

    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    cout << "Before Bubble Sorting: ";
    printArray(array, size);

    //Bubble Sort Implementatin-->
    for (int i = 1; i < size; i++)
    {
        cout << "Iteration No: " << i << endl;
        int flag = 0;
        for (int j = 0; j < (size - i); j++)
        {
            //For Ascending:
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                flag = 1;
            }
            //For Descending conditon--> array[j] < array[j + 1]...
            printArray(array, size);
        }
        if (flag == 0)
        {
            break;
        }
        cout << endl;
        
        
    }

    cout << endl;
    cout << "After Bubble Sorting: ";
    printArray(array, size);    
    
    return 0;
}