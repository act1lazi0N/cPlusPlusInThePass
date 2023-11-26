#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a;
    cin>>t;
    while(t--)
    {

        cin>>a;
        int dem=0;
        for(int i=0; i<=9; i++)
        {
            for(int j=0; j<=9; j++)
            {
                for(int t=0; t<=9; t++)
                {
                    for(int z=0; z<=9; z++)
                    {
                        if(i+j+t+z==a)
                            dem++;
                    }
                }
            }
        }
        cout<<dem<<"\n";
    }
