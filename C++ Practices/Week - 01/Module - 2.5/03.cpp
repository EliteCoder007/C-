#include<bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    char op;
    int ans;
    cin >> A >> op >> B;
    if (op == '+')
    {
        ans = A + B;
    }
    else
    {
        ans = A - B;
    }
    cout << ans;
    return 0;
}