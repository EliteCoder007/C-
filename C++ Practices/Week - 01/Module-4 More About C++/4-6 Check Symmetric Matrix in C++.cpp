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
           cin >> matrix[i][j];
        }
        
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                cout << "NO";
                return 0;
            }
            
        }
        
    }
    cout << "YES" << endl;
    
    return 0;
}