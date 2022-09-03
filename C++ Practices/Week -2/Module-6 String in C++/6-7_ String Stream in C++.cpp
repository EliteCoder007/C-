#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "ab bc ca df hkj lkd";

    // stringstream stream(s);
    //or:
    stringstream stream;
    stream << s;

    string w;
    while (stream >> w)
    {
        cout << w << endl;
    }
    
    return 0;
}