#include<bits/stdc++.h>
using namespace std;
int L[100001], R[100001];
int main()
{
    int n,j,t,z=0,dem=0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> L[i] >> R[i];
        j=L[i];
        while(j<=R[i])
        {

            for(t=1; t<=R[i]; t++)
            {
                if(j%t==0)
                {
                    if(t%2==0)
                    {
                        if(t%2==0)
                            z=z+t;

                    }
                }
            }
            if(z%2==0)
                dem++;
        }
        cout <<dem<<endl;

    }
    return 0;
}
