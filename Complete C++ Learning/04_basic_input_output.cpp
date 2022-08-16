#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    // << this is called Insertion Operator
    cout << "Enter the value of num1:\n";
    //>> this is called Extraction Operator
    cin >> num1;

    cout << "Enter the value of num2:\n";
    cin >> num2;

    cout << "The sum is " << num1 + num2;
    return 0;
}