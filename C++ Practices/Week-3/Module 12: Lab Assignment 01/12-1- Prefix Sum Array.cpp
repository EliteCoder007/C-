//Prefix sum use kore sohojei nirdisti index theke arekta index er majher sob gular sum ber kora jai constant time ee loop sarai...only prefixSum[last_range] - prefixSum[fast_range - 1] korlei hobe..kintu first_range 0 hoi taile biyog kora lagbea nah...

#include<bits/stdc++.h>
using namespace std;

int main(){
    int ar[5] = {10, 8, 1, 2, 5};
    int prefixSum[5];
    prefixSum[0] = ar[0];

    for (int i = 1; i < 5; i++)
    {
        prefixSum[i] = ar[i] + prefixSum[i - 1];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << prefixSum[i] << " ";
    }
    
    return 0;
}