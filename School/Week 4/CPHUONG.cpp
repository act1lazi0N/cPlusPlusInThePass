#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int i, dem = 0;
        for (int i = 1; i <= sqrt(n); i++)
        {
            dem++;
        }
        cout << dem << endl;



        if (i == sqrt(n))
        {
            for (int i = 1; i < sqrt(n); i++)
            {
                cout << i * i << " ";
            }
        }
        else
        {
            for  (int i = 1; i <= sqrt(n); i++)
            {
                cout << i * i << " ";
            }
        }


    return 0;
}





