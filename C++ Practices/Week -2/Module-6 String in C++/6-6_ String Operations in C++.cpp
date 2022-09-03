#include<bits/stdc++.h>
using namespace std;

int main(){
    //FIND FUNCTION:

    //Find from front:
    string findIndexOfChar = "aaaabbbaaazz";
    cout << findIndexOfChar.find('b') << endl;
    //or:
    cout << findIndexOfChar.find_first_of('b') << endl;
    //Find from reverse:
    cout << findIndexOfChar.rfind('b') << endl;
    //or:
    cout << findIndexOfChar.find_last_of('b') << endl;
    //Find  from first where absent:
    cout << findIndexOfChar.find_first_not_of('b') << endl;
    //Find from last where absent:
    cout << findIndexOfChar.find_last_not_of('b') << endl;

    //SUBSTRING FUNCTION:cut from a certain position to a certain position.
    string subStr = "EliteCoder";
    cout << subStr.substr(5, 9) << endl;



    return 0;
}