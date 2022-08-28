#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int cnt=1;
    cin>>n;

    while(cnt<=n)
    {
        cnt=cnt*2;
        if(cnt==n)
            break;
        if(cnt>n)
        {
            cnt=cnt/2;
            break;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
