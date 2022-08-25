#include<iostream>
using namespace std;

int main(){
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int area1 = A * B;
    int area2 = C * D;
    if (area1 >= area2)
    {
        printf("%d", area1);
    }
    else{
        printf("%d", area2);
    }
    
    return 0;
}