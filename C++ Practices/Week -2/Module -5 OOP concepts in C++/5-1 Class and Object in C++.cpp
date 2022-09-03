#include<bits/stdc++.h>
using namespace std;

class Student
{
    //Access modifier / specifier:
    public:
        char name[100];
        int roll;
};

int main(){
    Student elite;
    strcpy(elite.name, "EliteLearner");
    elite.roll = 2;

    cout << elite.name << " " << elite.roll << endl;
    return 0;
}