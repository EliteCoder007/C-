#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, n;
    cin >> a >> b >> c;
    if (a == b && b == c)
        n = 1;
    else if (a == b || b == c || a == c)
        n = 2;
    else
        n = 3;
    cout << n << endl;
    //easy logic...

    return 0;
}
