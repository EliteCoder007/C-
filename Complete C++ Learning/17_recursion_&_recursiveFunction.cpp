#include<iostream>
using namespace std;

int factorial(int num){
    if(num <= 1){
        return 1;
    }
    return num * factorial(num - 1);
}

//Step by step Factorial Calculations of 4:
// 4 * factorial(3)
// 4 * 3 * factorial(2)
// 4 * 3 * 2 * factorial(1)
// 4 * 3 * 2 * 1 = 24


//Fibonacci:
int fibonacci(int num){
    if(num < 2){
        return 1;
    }
    return fibonacci(num -2) + fibonacci(num -1);
}

//Step by step calculations of fibonacci(5):
// fibonacci(5)
// fibonacci(4) + fibonacci(3)
// fibonacci(2) + fibonacci(3) + fibonacci(2) + fibonacci(1)
// ...


int main(){
    // *** Factorial of a number:--> n! = n * (n - 1)! ***
    // 6! = 6*5*4*3*2*1 = 720;
    // 0! = 1 by defination
    // 1! = 1 by defination

    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << endl <<  "The factorial of " << num << " is " << factorial(num) << endl;

    //Fibonacci:

    int fib_num;
    cout << "Enter a number: ";
    cin >> fib_num;
    cout << "The term in fibonacci sequence at position " << fib_num << " is " << fibonacci(fib_num);



    return 0;
}