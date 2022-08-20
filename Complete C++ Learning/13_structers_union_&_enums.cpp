#include<iostream>
using namespace std;

//In C++ structure is built-in typedefed...
typedef struct employee
{
    int ID;
    char favChar;
    float salary;
}emp;

union money
{
    int rice;
    char car;
    float pounds; 
};



int main(){
    enum Meal{breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout << (m1 == 2);

    // union money m1; 
    // m1.rice = 34;
    // m1.car = 'c';
    // cout << m1.rice;
    

    // struct employee elite;
    // struct employee coder;
    // struct employee learner;
    // emp elite;
    // elite.ID = 007;
    // elite.favChar = '7';
    // elite.salary = 7000000;
    // cout << "ID : " << elite.ID << endl;
    // cout << "favChar : " << elite.favChar << endl;
    // cout << "salary : " << elite.salary << endl;




    return 0;
}