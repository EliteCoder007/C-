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

    int sum = 0;
    for (int  i = 0; i < row; i++)
    {
        for (int  j = 0; j < col; j++)
        {
            if (i == j)
            {
                sum += matrix[i][j]; 
            }
            
        }
    }
    cout << sum;
    
    
    return 0;
}