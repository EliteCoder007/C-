#include<bits/stdc++.h>
using namespace std;

class FunctionOverLoading
{
    public:
        int add(int x, int y)
        {
            cout << "First functinon" << endl;
            return x + y;
        }

        double add(double x, double y)
        {
            cout << "Second function" << endl;
            return x + y;
        }
        void add(char a)
        {
            cout << "Hi " << a << endl;
        }

};

int main(){
    FunctionOverLoading f;
    // cout << "add is " << f.add(1.9, 2.5)<< endl;
    f.add('z');
    return 0;
}