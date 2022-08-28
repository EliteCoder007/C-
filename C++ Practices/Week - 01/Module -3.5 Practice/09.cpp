// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     char A[10], B[10], C[10];
//     cin >> A >> B >> C;

//     for (int  i = 1; i <= 10; i++)
//     {
//         if (A[strlen(A) - 1] == B[0] && B[strlen(B) - 1] == C[0])
//         {
//             cout << "YES";
//             break;
//         }
//         else
//         {
//             cout << "NO";
//             break;
//         }
        
//     }
    
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main(){
  string A,B,C;
  cin>>A>>B>>C;
  cout<<(A.at(A.size()-1)==B.at(0)&&B.at(B.size()-1)==C.at(0)?"YES":"NO")<<endl;
  
  return 0;
}