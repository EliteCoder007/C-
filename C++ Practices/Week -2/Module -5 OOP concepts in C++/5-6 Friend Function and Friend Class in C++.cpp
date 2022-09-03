#include<bits/stdc++.h>
using namespace std;

class Parent
{
    private:
        int taka;
    protected:
        int password;
    public:
        Parent(int tk,int ps)
        {
            taka = tk;
            password = ps;
        }
        friend class AbburBondhu;
        friend void tellME(Parent *ptr);
};

//Friend class:
class AbburBondhu
{
    public:
        void tellSecret(Parent *ptr)
        {
            cout << ptr->taka<< endl;
            cout << ptr->password << endl;
        }
};

//Friend function:
void tellME(Parent *ptr)
{
    cout << ptr->taka << " " << ptr->password <<endl;
}

int main(){
    Parent pt(1500,32003);
    AbburBondhu bondhu;
    bondhu.tellSecret(&pt);
    tellME(&pt);
    return 0;
}