#include<bits/stdc++.h>
using namespace std;

class Password
{
    private:
        int num;
        int pass;//32003

    public:
        Password(int p)
        {
            pass = p;
        }
        void setter(int a, int p)
        {
            if (pass == p)
            {
                num = a;
            }
            else
            {
                cout << "Password didn't match" << endl;
            }
        }
        int getter(int p)
        {
            if (pass == p)
            {
                return num;
            }
            else
            {
                cout << "Password didn't match" << endl;
                return -1;
            }
            
            
        }

};

int main()
{
    Password a(32003);
    a.setter(1500,1234);
    cout << a.getter(1234)<<endl;
    
    return 0;
}