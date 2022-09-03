#include<bits/stdc++.h>
using namespace std;

int main(){

    //ASSIGN:
    string str = "Elite";
    str.assign("Coder");
    str = "Elite";
    cout <<str << endl;

    //CONCATINATE:
    string str1 = "Noob";
    string str2 = "Coder";
    str1 += str2;
    cout << str1 << endl;
    str2.append(str1);
    cout << str2 << endl;

    //PUSHBACK-->Insert from backward:
    string push = "push";
    push.push_back('Y');
    cout << push << endl;

    //POPBACK-->Delete last char:
    string pop = "Poppers";
    pop.pop_back();
    cout << pop << endl;

    //INSERT-->Insert a string in a required /fixed positin:
    string insertNova = "Hridoy";
    insertNova.insert(1,"Nova");
    cout << insertNova <<endl;

    //ERASE-> Erage from a certain position and erase certain number of char:
    string eraseNova = "HNovaridoy";
    eraseNova.erase(1,4);
    cout << eraseNova << endl;

    //SWAP --> Swap two strings:
    string strN = "Nova";
    string strH = "Hridoy";
    swap(strN, strH);
    cout << strH << endl;
    cout << strN << endl;

    
    return 0;
}