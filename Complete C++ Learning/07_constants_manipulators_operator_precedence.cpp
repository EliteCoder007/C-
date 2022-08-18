#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // int a = 35;
    // cout << "The value of a was " << a << endl;
    // a = 45;
    // cout << "The value of a is " << a << endl;

    // ************Constants in C++:***************


    // const float x = 3.33f; 
    // cout << "The value of x is " << x << endl;

    //***************Manupulators in C++:**********


    int a = 3, b = 422, c = 4456;
    cout << "The value of a without setw is : " << a << endl;
    cout << "The value of b without setw is : " << b << endl;
    cout << "The value of c without setw is : " << c << endl;

    cout << "The value of a is : " << setw(4) << a << endl;
    cout << "The value of b is : " << setw(4) << b << endl;
    cout << "The value of c is : " << setw(4) << c << endl;

    
    //***************Operator Precedence************

    // int a = 3, b = 4;
    // //int d = (a * 5) + b;
    // int c = ((((a * 5)+b)-45)+87);
    // cout << c;

    return 0;
}