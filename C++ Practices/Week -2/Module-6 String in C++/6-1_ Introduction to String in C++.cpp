#include<bits/stdc++.h>
using namespace std;

int main(){
    // string str = "abcd";
    // str = "xyz";

//String -->Dynamic Array
    // string str;
    // tr = "lodfdhsjfdjndjcdjdhfdhfjdfjdvnjnvdjjkfjkajkjak";
    // cout << str.capacity() << endl;
    // str = "sfkdfjdskfjkdsfjkefjfkejjjjjeeeeeoeeeeeeeeehhhhhhhhhhhhhhhhhe";
    // cout << str.capacity() << endl;
    // cout << str.max_size()<< endl;

    // string str;
    // cout << str.capacity() << endl;
    // cin >>str;
    // cout << str <<endl;

//string er je obj toiri korlam mane str oitar ekta constructor ace jeta 2 ta value nei and ekta int ja size bujhai ar ekta char --> jar maddhome oi int songkhok char print kora jai....
    // string str(10,'Y');
    // cout << str << endl;


//string copy, Concatinate,compare:
    string str1 = "Elite";
    string str2 = "Elite";
    cout << str1 + str2 <<endl;
    if (str1 == str2)
    {
        cout <<"YES" <<endl;
    }
    else
    {
        cout <<"NO" <<endl;
    }
    str1 = str2;
    cout << str1 <<endl;
    return 0;
}