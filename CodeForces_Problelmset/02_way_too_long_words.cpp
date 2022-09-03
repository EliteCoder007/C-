#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char ch[100];
        cin >> ch;
        // cout << strlen(ch);
        if (strlen(ch) > 10)
        {
            cout << ch[0] << (strlen(ch) - 2) << ch[strlen(ch) - 1] << endl;
        }
        else
        {
            cout << ch << endl;
        }
    }

    return 0;
}