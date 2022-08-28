#include<bits/stdc++.h>
using namespace std;

int main(){
    char s[100];
    cin >> s;

    int count = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        count++;
    }
    cout << s[0] << (count - 2) << s[strlen(s) - 1];
    
    return 0;
}