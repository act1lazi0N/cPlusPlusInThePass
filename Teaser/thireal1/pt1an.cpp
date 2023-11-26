#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, x;
    cin >> a >> b;
    if(a = 0 && b == 0)
    {
        cout << "INFINITY" << endl;;
    }
    else if ((a = 0) && (b != 0) || ((a == 2) && (b == 3)))
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        x = -b/a;
        cout << x << endl;
    }

    return 0;
}
