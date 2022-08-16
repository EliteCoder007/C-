//There are two types of header files:
//1.System header files: It comes with the compiler
#include<iostream>
//2.User defined header files: It is written by the Programmer
//#include "this.h" --> This will produce an error if this.h is not present in the current directory.

using namespace std;

int main(){
    int a = 5, b = 5;
    cout << "This is Hello World Program";
    cout << "Operaotrs in C++:" << endl;
    cout << "Flowing are the types of operators in C++" << endl;
    //Arithmatic Operators
    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a - b is " << a - b << endl;
    cout << "The value of a * b is " << a * b << endl;
    cout << "The value of a / b is " << a / b << endl;
    cout << "The value of a % b is " << a % b << endl;
    
    cout << "The value of a++ is " << a++ << endl;
    cout << "The value of a-- is " << a-- << endl;
    cout << "The value of ++a is " << ++a << endl;
    cout << "The value of --a is " << --a << endl;

    //Assignment Operators --> used to assign values to variables
    //int a = 3, b = 9;
    // char d = 'd';

    //Comparison Operators
    cout << "The value of a == b is " << (a == b) << endl;
    cout << "The value of a != b is " << (a != b) << endl;
    cout << "The value of a >= b is " << (a >= b) << endl;
    cout << "The value of a <= b is " << (a <= b) << endl;
    cout << "The value of a < b is " << (a < b) << endl;
    cout << "The value of a > b is " << (a > b) << endl;

    //Logical Operators
    cout << "Following are the logical operators in C++" << endl;
    cout << "The value of this logical and operators (a == b) && (a < b ) is : " << ((a == b) && (a < b)) << endl;
    cout << "The value of this logical or operators (a == b) || (a < b ) is : " << ((a == b) || (a < b)) << endl;
    cout << "The value of this logical not operators (!(a == b)) is : " << (!(a == b)) << endl;





    return 0;
}
