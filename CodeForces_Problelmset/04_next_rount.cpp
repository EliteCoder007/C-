#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int k;
    cin >> n >> k;

    int temp[n]= {0};
    for (int i = 0; i < n; i++)
    {
        cin >> temp[i];
        {
            for (int j = 0; j < k; j++)
            {
                if (temp[i] <= temp[i - 1] )
                {
                    temp[i] = temp[i - 1];
                }
                
            }
            
        }
    }
    
    return 0;
}