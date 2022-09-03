#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "Elite";
    cout << str[3] << endl;
    cout << str.at(3) << endl;
    
    //front() --> str[0];
    cout << str.front() << endl;
    
    //back()--> str[str.size() - 1];
    cout << str.back() << endl;
    return 0;
}