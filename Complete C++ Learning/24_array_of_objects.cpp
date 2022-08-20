#include<iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

    public:
        void setId();
        void getId();
};

void Employee :: setId()
{
    salary  = 122;
    cout << "Enter the ID of employee : ";
    cin >> id;
}

void Employee ::  getId()
{
    cout << "The id of this employee is " << id << endl;
}

int main(){
    //Tough to write again and again:
    // Employee elite, learner, coder;
    // elite.setId();
    // elite.getId();

    // learner.setId();
    // learner.getId();

    Employee workers[5];
    for (int i = 0; i < 5; i++)
    {
        workers[i].setId();
        workers[i].getId();
    }
    

  
    return 0;
}
