#include <bits/stdc++.h>
using namespace std;

int main()
{

    int size;
    cin >> size;

    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    char yesNo;
    cout << "Do you want to Search: (Y/N) --> ";
    cin >> yesNo;

    while (toupper(yesNo) == 'Y')
    {
        int checkValue;
        cout << "Please enter the value you want to search : ";
        cin >> checkValue;

        int flag = 0;

        for (int i = 0; i < size; i++)
        {
            if (array[i] == checkValue)
            {
                flag = 1;
                cout << "Index NO : " << i << "\tPosition : " << (i + 1) << endl;
            }
        }
        if (flag == 0)
        {
            cout << "NOT FOUND" << endl;
        }

        cout << "Do you want to Continue Searching: (Y/N) --> ";
        cin >> yesNo;
    }

    return 0;
}