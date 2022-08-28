#include<bits/stdc++.h>
using namespace std;

int main(){
    char S[26];
    cin >> S;

    int tr = 0;
    for (int i = 0; i < strlen (S); i++)
    {
        char temp = S[i];
        //cout << strlen(S);
        //cout << temp;
        for (int j = i + 1; j < (strlen(S)); j++)
        {
            if (temp == S[j])
            {
                //cout << S[j];
                tr = 1;
                break;
            }
            
        }
        
    }
    if (tr == 1)
        {
            cout << "no";
        }
        else
        {
            cout << "yes";
        }
    return 0;
}