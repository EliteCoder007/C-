#include<bits/stdc++.h>
using namespace std;

namespace first
{
    int x = 100;
    void function1()
    {
        cout << "This is First namespace\n";
    }
}

namespace second
{
    int y = 200;
    void function2()
    {
        cout << "This is Second namespace\n";
    }
}

using namespace first;
using namespace second;

int main(){
    function1();
    cout << first::x << endl;

    function2();
    cout << second::y << endl;
    return 0;
}