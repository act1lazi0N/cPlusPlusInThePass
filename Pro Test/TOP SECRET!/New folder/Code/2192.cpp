#include<bits/stdc++.h>

using namespace std;
int n,k,a[100002];
int dem(long long s)      //Chia mang thanh cac doan ma tong moi doan nho hon hoac bang s, tra lai so doan it nhat duoc chia
    {
        long long t=0;   //tong cua doan hien thoi
        int d=1;        //so doan hien thoi
        for(int i=1;i<=n;i++)
        {
            if(a[i]>s)return k+1;
            if(t+a[i]<=s)t+=a[i];
            else
                {   d++;
                    t=a[i];
                }
        }

        return d;
    }

int main()
    {

        cin>>n>>k;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        k++;
       //tim gia tri tong lon nhat cua 1 doan bang thuat toan tim kiem nhi phan
       long long l=0,r=1e15;
       while (l<r)
       {
           long long m=(l+r)/2;
           if(dem(m)<=k)
                r=m;
           else
                l=m+1;
       }
       cout<<l;

    }
