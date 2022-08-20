#include<iostream>
using namespace std;

class Employee
{
    int id;

    // ***Static Variable ***
    static int count;

    public:
        void setData();
        void getData();
        static void getCount();
};

void Employee :: setData()
{
    cout << "Enter the ID: ";
    cin >> id;
    count++;
}

void Employee :: getData()
{
    cout << "The ID of " << count << "  employee is " << id << endl;
}

// ***Static Variable ***
//      -->Default value is 0;
//Count is the static data member of class Employee...
int Employee :: count;

// ***Static Function ***
//      -->only takes static members;
//      -->directly run without Objects;
 void Employee :: getCount()
{
 cout << "The value of count is : " << count << endl;
}

int main(){
    Employee Elite , Learner, Coder;

    // ***These two lines can't execute as the are private ***
    //Elite.id = 1;
    //Elite.count = 1;

    Elite.setData();
    Elite.getData();
    Employee::getCount();

    Learner.setData();
    Learner.getData();
    Employee::getCount();

    Coder.setData();
    Coder.getData();
    Employee::getCount();

    return 0;
}