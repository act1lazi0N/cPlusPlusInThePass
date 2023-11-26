#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int tag;
    cin >> tag;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i] + a[j] == tag)
            {
                swap(a[i], a[j]);
                cout << "[" << a[i] << "," << a[j] << "]" << "\n";
            }
        }
    }
    system("pause");
    return 0;
}
