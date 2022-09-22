#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cs;
    cin >> cs;
    for (int i = 0; i < cs; i++)
    {
        int size;
        cin >> size;
        int array[size];
        for (int i = 0; i < size; i++)
        {
            cin >> array[i];
        }

        // count maximum frequency....
        int max_count = 0;
        for (int i = 0; i < size; i++)
        {
            int count = 0;
            for (int j = 0; j < size; j++)
            {
                if (array[i] == array[j])
                {
                    count++;
                }
            }
            if (count > max_count)
            {
                max_count = count;
            }
        }
        cout << size - max_count << endl;
    }
}