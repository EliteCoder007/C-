#include <bits/stdc++.h>
using namespace std;
//Reference &v pass korle actual vector pass hobe noile copy create hobe...
void printVector(vector<int> &v)
{
    cout << "size: " << v.size() << endl; // O(1);
    // V.size() --> tell us about the size of a vector;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    v.push_back(2);
    cout << endl;
}
void printVectorString(vector<string>v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    
}

int main()
{
    // Vector declearation-->
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        printVector(v);

        //Add from last-->
        v.push_back(x); // O(1)
    }
    printVector(v);

    //Declearing vector with size-->
    //Initialize with 0's-->
    // vector<int>vWithSize(5);

    //Initialize with other values-->
    vector<int>vWithSize(5, 6);
    vWithSize.push_back(7);
    printVector(vWithSize);

    //Remove from last-->
    vWithSize.pop_back();//O(1)
    printVector(vWithSize);

    //Coping an Vector-->
    vector<int> vCopy = v;//O(n)
    vCopy.push_back(100);
    printVector(v);
    printVector(vCopy);

    //string as vector-->
    vector<string> vString;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        vString.push_back(s);
    }
    printVectorString(vString);
    

    return 0;
}