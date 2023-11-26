#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    getline (cin,a);
    int dem[256];
    for (int i=0; i<256; i++)
    {
        dem[i]=0;
    }

    for (int j=0; j<a.size() ;j++)
    {
        if (a[j]>='0' && a[j]<='9')
        {
            dem[a[j]]++;
        }
    }
    for (char j='0'; j<='9'; j++)
    {
        cout << dem[j];
    }
}
