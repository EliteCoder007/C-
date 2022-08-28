#include<bits/stdc++.h>
using namespace std;

int main(){
    char s [100000];
    cin >> s;


    for (int i = 0; i < strlen(s); i++ )
    {   char temp;
        temp = s[i];
       // cout << s[i];
        cout << temp;
        i++;
    }
    
    return 0;
}