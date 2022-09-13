#include <bits/stdc++.h>
using namespace std;

int binarySearch(int array[], int searchValue, int lowerBound, int upperBound)
{
    if (lowerBound <= upperBound)
    {
        int mid = (lowerBound + upperBound) / 2;

        // searchValue == array[Mid]-->
        if (searchValue == array[mid])
        {
            return mid;
        }

        // seachValue > array[Mid]-->
        else if (searchValue > array[mid])
        {
            binarySearch(array, searchValue, (mid + 1), upperBound);
        }

        // seachValue < array[Mid]-->
        else
        {
            binarySearch(array, searchValue, lowerBound, (mid - 1));
        }
    }
    else
    {
        return -1;
    }
}

int main()
{
    int size;
    cin >> size;

    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    int searchValue;
    cout << "Please enter the value you want to search : ";
    cin >> searchValue;

    int indexNumber;
    indexNumber = binarySearch(array, searchValue, 0, (size - 1));

    if (indexNumber != -1)
    {
        cout << "Index No : " << indexNumber << "\tPosition No : " << (indexNumber + 1) << endl;
    }
    else
    {
        cout << "NOT FOUND" << endl;
    }

    return 0;
}