#include<bits/stdc++.h>
using namespace std;

int main(){
    char alphabet;
    cin >> alphabet;

    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u')
    {
        cout << "vowel";
    }
    else
    {
        cout << "consonant";
    }
    return 0;
}