#include<bits/stdc++.h>
using namespace std;

int main(){
    int numOfChildren;
    cin >> numOfChildren;

    int sum = 0;
    for (int i = 1; i <= numOfChildren; i++)
    {
        sum += i;
    }
    cout << sum;
    
    return 0;
}