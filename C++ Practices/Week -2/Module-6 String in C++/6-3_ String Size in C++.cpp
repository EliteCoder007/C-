#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "abcdefghij";
    cout << str.length() << endl;
    cout << str << " " << str.size() << endl;

    str.resize(5);
    cout << str << " " << str.size() << endl;

    str.clear();
    cout << str << " " << str.size() << endl;

    if (str.empty())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    
    return 0;
}