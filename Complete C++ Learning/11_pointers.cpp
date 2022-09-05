#include<iostream>
using namespace std;

int main(){
    //What is pointer? --> data type which holds the address of otherdata types

    int a = 3;
    int* ptr = &a;

    // & --> Address of operator
    cout << "The address of a is "<< &a << endl;
    cout << "The address of a is "<< ptr << endl;


    // *-->(Value at) Dereference operator
    cout << "The value at address ptr is "<< *ptr << endl;
    
    //Pointer to pointer:
    int** ptrOfPtr = &ptr;
    cout << "The address of ptr is " << &ptr << endl;
    cout << "The address of ptr is " << ptrOfPtr << endl;
    cout << "The value at address ptrOfPtr is " << *ptrOfPtr << endl;
    cout << "The value at address value at (value at (ptrOfPtr)) is " << **ptrOfPtr << endl;

    return 0;
}