#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int store = N;
    if (N >= 100 && N <= 999)
    {
        int rev_N = 0;
        while (N > 0)
        {
            rev_N = rev_N * 10 + N % 10;
            N = N /10;
        }
        // cout << rev_N;
        if (rev_N == store)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
        
        
        
    }
    
    return 0;
}