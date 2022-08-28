#include<bits/stdc++.h>
using namespace std;

int main(){
    int row , col;
    cout<< "Row\n";
    cin >> row;
    cout << "Column\n";
    cin >> col;
    int matrix[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           // cout << i << "," << j << " ";
           cin >> matrix[i][j];
        }
       // cout << endl;
        
    }
    for (int  i = 0; i < row; i++)
    {
        for (int  j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    
    return 0;
}