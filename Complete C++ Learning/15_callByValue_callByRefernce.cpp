#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}
//This will not swap a and b;
// void swap(int a, int b){
//     int temp = a;
//     a = b;
//     b = temp;
// }

                    // *** swap using Pointer ***

//Call By Refernce  using Pointer...
// void swapPointer(int* a, int* b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }


//Call By Reference using C++ reference Vairables:
void swapRefernceVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}


int main(){
    int a = 4, b = 5;
    // cout << "The sum of 4 and 5 is " << sum(a, b);
    cout << "The value of a is  " << a <<" and the value of b is " << b << endl;
    // swap(a, b);//This won't work...
    // cout << "After swapping, the value of a is  " << a <<" and the value of b is " << b << endl;


    // swapPointer(&a, &b);
    // cout << "After swapping, the value of a is  " << a <<" and the value of b is " << b << endl;

    swapRefernceVar(a, b);
    cout << "After swapping, the value of a is  " << a <<" and the value of b is " << b << endl;



    return 0;
}