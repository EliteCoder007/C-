#include<iostream>
using namespace std;

// *** Inline function is used to save us from many function call *** 
// but we have to use it only small functions.

// inline int product(int a, int b){
//     return a * b;
// }

// int product(int a, int b){
//     // *** Static variables executes only once ***
//     //Not recommended to use below lines with inline functions...
//     static int c = 0;
//     //Next time this function is run, the value of c will be retained...
//     c += 1;
//     return a * b + c;
// }


//Default arguments after Compulsory arguments...
float moneyReceived(int currentMoney, float factor = 1.04){
    return currentMoney * factor;
}

// *** Constant Arguments ***
// int strlen(const char *p){

// }

int main(){
    // int a,b;
    // cout << "Enter the value of a  and b " << endl;
    // cin >> a >> b;

    int money = 100;

    // *** Default Argument ***...
    cout << "If you have " << money << " Rs in your bank account , you will receive " << moneyReceived(money) << " Rs after 1 year" << endl;


    cout << "For VIP: If you have " << money << " Rs in your bank account , you will receive " << moneyReceived(money, 1.1) << " Rs after 1 year";

    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    return 0;
}