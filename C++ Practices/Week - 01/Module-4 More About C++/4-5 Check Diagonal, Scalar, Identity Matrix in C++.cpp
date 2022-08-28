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
    
    if (row != col)
    {
        cout << "No" << endl;
        return 0;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                continue;
            }
            if (matrix[i][j] > 0)
            {
                cout << "No" << endl;
                return 0;
            }
            
            
        }
        
    }

   // cout << "Yes" << endl;

    int save;
   for (int i = 0; i < row; i++)
   {
    for (int j = 0; j < col; j++)
    {
        if (i == j)
        {
            if (i == 0 && j == 0)
            {
                save = matrix[i][j];
            }
            else
            {
                if (save != matrix[i][j])
                {
                    cout << "Not Scaler" << endl;
                    return 0;
                }
                
            }
            
        }
        
    }
    
   }
   cout << "Scalar" << endl;
   cout << save << endl;
   
    
    
    return 0;
}