#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int,string> p;

    //Input Methods in Pair-->
    // p = make_pair(2, "elite");
    p = {2, "EliteLearner"};

    //Copying pair-->
    pair<int,string> pCopy = p;
    pCopy.first = 5;

    //Refernce to indicate same pair-->
    pair<int,string> &pRef = p;
    pRef.first = 10;

    //Output Methods in Pair-->
    cout << p.first << " " << p.second << endl;

    cout << pCopy.first << " " << pCopy.second << endl;

    cout << pRef.first << " " << pRef.second << endl;

    cout << p.first << " " << p.second << endl;

    //Pair of two array-->
    int a[] = {1,2,3};
    int b[] = {2,3,4};
    pair<int,int> pArray[3];
    pArray[0] = {1,2};
    pArray[1] = {2,3};
    pArray[2] = {3,4};
    //Swaping first and last-->
    swap(pArray[0], pArray[2]);
    for (int i = 0; i < 3; i++)
    {
        cout << pArray[i].first << " " << pArray[i].second << endl;
    }
    
    return 0;
}