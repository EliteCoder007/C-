#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, K, X, Y;
    cin >> N >> K >> X >> Y;
    int forKNight = 0;
    int forK_1Night = 0;
    if (N > K)
    {
        forK_1Night = (N - K) * Y;
        forKNight = K * X;
    }
    else
    {
        forK_1Night = 0;
        forKNight = X * N;
    }
    
    
    cout << forKNight + forK_1Night;
    return 0;
}