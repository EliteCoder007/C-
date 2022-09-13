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
    // cout << "Position of the Insertion : ";
    cout << "Position of the Deletion : ";
    cin >> pos;
    int value;
    // cout << "Value of the Insertion : ";
    // cout << "Value of the Deletion : ";
    // cin >> value;

    if (pos < 0 || pos > size - 1)//Insertion --> size, Deletion --> size - 1;
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
        // array[size] = array[pos];
        
        // array[pos] = value;


    //Deletioni-->

        //Deletion at Last Position:
        if (pos == size - 1)
        {
            size--;
        }

        //Deletion at start or Mid Position:

        //pos + 1 --> size - 1
        else
        {
            for (int i = pos + 1; i <= size - 1; i++)
            {
                array[i - 1] = array[i];
            }
            size--;
            
        }

    }

    // cout << "Array After the Insertion : ";
     cout << "Array After the Deletion : ";
    // printArray(array, size + 1);
    printArray(array, size);
    



    
    return 0;
}