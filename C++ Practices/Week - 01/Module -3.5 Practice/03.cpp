#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[100000];
    cin >> s;
    int count[26] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        char val = s[i];
        count[val - 'a'] = 1;
    }
    for (char val = 'a'; val <= 'z'; val++)
    {
        if (count[val - 'a'] < 1)
        {
            cout << val;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}
