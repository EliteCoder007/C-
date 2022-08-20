// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

// Nesting of member functions

#include<iostream>
#include<string>
using namespace std;

class Binary{
    // private:
    //If we declare any thing inside class this will automatically recognized as Private...
    string binaryNum;
    void checkBinary();
    
    public:
        void read();
        // void checkBinary();
        void display();
        void ones_complement();            
};

void Binary :: read(){
    cout << "Enter a number: ";
    cin >> binaryNum;
}

void Binary :: checkBinary(){
    for (int i = 0; i < binaryNum.length(); i++)
    {
        if (binaryNum.at(i) != '0' && binaryNum.at(i) != '1')
        {
            cout << "Incorrect Binary Format" << endl;
            exit(0);
        }
        
    }
    
}

void Binary :: display(){
    cout << "Displaying your binary number : " << binaryNum << endl;
}

void Binary :: ones_complement(){

    //Nesting...
    checkBinary();

    for (int i = 0; i < binaryNum.length(); i++)
    {
        if (binaryNum.at(i) == '0')     
        {
            binaryNum.at(i) = '1';
        }
        else
        {
            binaryNum.at(i) = '0';
        }
        
    }
}

int main(){
    Binary Elite;
    Elite.read();
    // Elite.checkBinary();
    Elite.display();
    Elite.ones_complement();
    Elite.display();
    return 0;
}