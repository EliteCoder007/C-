#include<bits/stdc++.h>
#define MAXN 100000 + 10
#define MAXM 2000 + 10
#define INF 0x3f3f3f3f
using namespace std;
int Elite[MAXN][30];
int A[MAXN];
int N , Q;

void RMQ_init()
{
    for (int i = 1; i <= N; i++)
    {
        Elite[i][0] = A[i];
    }
    for (int j = 1; (1<<j) <= N; j++)
    {
        for (int i = 1; i + (1 << j) - 1 <= N; i++)
        {
            Elite[i][j] = min(Elite[i][j - 1],Elite[i+(1<< (j - 1))] [j - 1 ]);
        }
        
    }
}

    int query (int L, int R)
    {
        int k = 0;
        while ((1<<(k+1)) <= R - L + 1)
        {
            k++;
        }
        return min(Elite[L][k], Elite[R-(1 << k) + 1] [k]);
        
    }
int k = 1;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> N >> Q;
        for (int i = 1; i <= N; i++)
        {
            cin >> A[i];
        }
        RMQ_init();
        int a, b;
        cout << "Case "<< k++ <<":" << endl;
        while (Q--)
        {
            cin >> a >> b;
            cout <<query(a,b) << endl;
        }
        
        
    }
    
    return 0;
}