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
    
    int req_row;
    cin >> req_row;
    for (int i = 0; i < col; i++)
    {
        cout << matrix[req_row][i] << " ";
    }
    
    
    
    return 0;
}