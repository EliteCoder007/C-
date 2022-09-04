#include<bits/stdc++.h>
using namespace std;

class StudentInfo
{  
    public:
        string name;
        char section;
        int roll;
    protected:
        int english_marks;
    private:
        string password;
    public:
        void set_password(string pass)
        {
            password = pass;
        }
        void set_mark(int engMark)
        {
            english_marks = engMark;
        }
        int get_mark()
        {
            return english_marks;
        }
        void update_marks(string pass, int engMark)
        {
            if (pass == password)
            {
                english_marks = engMark;
            }
            else
            {
                cout << "Password didn't match!" << endl;
            }
            
            
        }

};

int main(){

    int NumberOfStudent;
    cin >> NumberOfStudent;
    StudentInfo student[NumberOfStudent];
    for (int i = 0; i < NumberOfStudent; i++)
    {
        string name, pass;
        char section;
        int roll, engMark;
        cout << "Enter Name Section Roll English Marks Password";
        cin >> name>>section>>roll>>engMark>>pass;
        student[i].name = name;
        student[i].section = section;
        student[i].roll = roll;
        student[i].set_mark(engMark);
        student[i].set_password(pass);
    
    }

    int roll, engMark;
    string pass;
    cin >> roll >> engMark >> pass;
    bool found = false;
    for (int i = 0; i < NumberOfStudent; i++)
    {
        if (student[i].roll == roll)
        {
            found = true;
            student[i].update_marks(pass, engMark);
        }
        
    }
    if (!found)
    {
        cout << "Student not found!" << endl;
        return 0;
    }
    for (int i = 0; i < NumberOfStudent; i++)
    {
        cout << student[i].name << " " <<student[i].section << " " << student[i].roll << " " << student[i].get_mark() << endl;
    }
    
    
    
     
    return 0;
}
