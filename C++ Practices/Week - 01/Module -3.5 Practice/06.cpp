#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;

    int len[N];
    for (int i = 0; i < N; i++)
    {
        cin >> len[i];
    }

    int sum = 0;
    sort(len,len + N);
    reverse(len, len + N);
    for (int i = 0; i < K; i++)
    {  
        sum += len[i];
        
    }
    cout << sum;
    
    
    return 0;
}