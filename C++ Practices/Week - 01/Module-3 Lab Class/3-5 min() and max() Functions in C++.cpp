#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 10, b = 20, c = 40;
    
    //min Fuction:
    // int mn = min(a,min(b, c));
    // cout << "Min : " << mn << endl;

    //max Function:
    // int mx = max(a, max(b, c));
    // cout << "Max : " << mx <<endl;
    

    //For ArraY:
    
    int ar[5] = {5,2,3,1,4};
    int mn = ar[0];
    int mx = ar[0];
    for (int i = 0; i < 5; i++)
    {
        //Min:

        // if (ar[i] < mn)
        // {
        //     mn = ar[i];
        // }
        mn = min(mn, ar[i]);

        //Max:

        // if (ar[i] > mn)
        // {
        //     mn = ar[i];
        // }
        mx = max(mx,ar[i]);
        
        
    }
    cout <<"Max : " << mx << endl;
    cout <<"Min : " << mn << endl; 
    return 0;
}