#include<bits/stdc++.h>
using namespace std;
int t;
long long a,dem;

int main()
{

    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>a;
        dem=0;
        while(a!=0)
        {
            if(a%2==1)
                dem++;
            a=a/2;
        }


        if(dem%2==0)
            cout<<"even"<<endl;
        else cout<<"odd"<<endl;

    }


    return 0;
}
