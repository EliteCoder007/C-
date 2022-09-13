//problem...

#include<bits/stdc++.h>
using namespace std;

void findIntersection(int *arrayN, int * arrayM, int sizeN, int sizeM)
{
    
}

int main(){
    int sizeN;
    cin >> sizeN;

    int arrayN[sizeN];
    for (int i = 0; i < sizeN; i++)
    {
        cin >> arrayN[i];
    }


    int sizeM;
    cin >> sizeM;

    int arrayM[sizeM];
    for (int i = 0; i < sizeM; i++)
    {
        cin >> arrayM[i];
    }

    findIntersection(arrayN, arrayM, sizeN, sizeM);
    

    
    return 0;
}