#include<bits/stdc++.h>
using namespace std;
//Travarsal:
void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    
}

int main(){
    int array[50];

    int size;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    
    cout << "Given Array : ";
    printArray(array, size);

//Insertion :
    /*Pseudocode:
                Size - 1 --> pos
                */
    int pos;
    cout << "Position of the Insertion : ";
    cin >> pos;
    int value;
    cout << "Value of the Insertion : ";
    cin >> value;

    if (pos < 0 || pos > size)
    {
        cout << "Invalid Index";
    }
    else
    {
    //Insertion for sorted Array-->

        //size - 1 (4) --> pos (2);    

        // for (int i = size - 1; i >= pos; i--)
        // {
        //     array[i + 1] = array[i];
        // }

    //Insertion for unsorted Array-->

        //size --> pos (5)
        array[size] = array[pos];
        
        array[pos] = value;
        
    }

    cout << "Array After the Insertion : ";
    printArray(array, size + 1);
    



    
    return 0;
}