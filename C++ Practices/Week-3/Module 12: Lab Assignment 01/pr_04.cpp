// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int T;
//     cin >> T;

//     int N;
//     int A[N];
//     for (int i = 0; i < T; i++)
//     {
//         cin >> N;
//         for (int j = 0; j < N; i++)
//         {
//             cin >> A[j];
//         }
//     }

//     // int ans = 0;
//     // for (int i = 0; i < T; i++)
//     // {
//     //     for (int j = 0; j < N; j++)
//     //     {
//     //         if (A[j] != A[j + 1])
//     //         {
//     //             A[j] == A[j + 1];
//     //             ans++;
//     //         }  
//     //     }
        
        
//     // }
//     // cout << ans << endl;
    
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,i;
cin>>t;
while(t--)
{
int n;
cin>>n;
set<int>s;
long long int a[n+1];
for(i=0;i<n;i++)
{
cin>>a[i];
s.insert(a[i]);
}
cout<<s.size()<<"\n";
}
}