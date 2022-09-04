#include<bits/stdc++.h>
using namespace std;

class Parent
{
    public:
        void fun()
        {
            cout << "Funny" << endl;
        }
};

class Child:public Parent
{
    public:
        void fun()
        {
            cout << "Not Funny" << endl;
        }
};

int main(){
    Child objC;
    objC.fun();
    return 0;
}