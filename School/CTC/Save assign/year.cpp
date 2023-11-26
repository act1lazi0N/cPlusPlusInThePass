#include<bits/stdc++.h>
using namespace std;
bool check(int n)
{
    int n1, n2, n3, n4;
    n1 = n % 10;
    n2 = (n / 10) % 10;
    n3 = (n / 100) % 10;
    n4 = (n / 1000);
    if (n1 != n2 && n1 != n3 && n1 != n4 && n2 != n3 && n2 != n4 && n3 != n4)
        {
            return true;
        }
    return false;

}
int main()
{
    int n;
    cin >> n;
    for (int i = n + 1; i <= 9999; i++)
    {
        if (check(i) == true)
        {
            cout << i;
            return 0;
        }

    }


}
