#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int store;
    if (a > b && a > c)
    {
        store = b + c;
        if (a == store)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        } 
    }

    else if (b > c && b > a)
    {
        store = a + c;
        if (b == store)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        } 
    }

    else if (c > a && c > b)
    {
        store = a + b;
        if (c == store)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        } 
    }
    
    return 0;
}