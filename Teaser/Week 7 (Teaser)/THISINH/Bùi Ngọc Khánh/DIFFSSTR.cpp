#include<bits/stdc++.h>
using namespace std;
int ham(string s)
{
    sort(s.begin(),s.end()); // AABBCCD
    int t=0;
    for(;s.size()!=0;)  // Khi cả dãy kia không bằng 0;
    {
        t=s.rfind(s[0])+1; // tìm kiếm từ s[0] trở đi
        if (t>1) return 0;  // nếu t > 1 thì đúng
        s.erase(0,1);       // xóa từ 0 cho đến 1
    }
    return 1; // sai
}
int main ()
{
    int n,max=0;
    string s,r="";
    cin>>n>>s;
    for (int i=0;i<n;i++)
    for (int j=i;j<n;j++)
    {
        r+=s[j];
    }
    cout << r;
        if (ham(r)==0)
        {
            r="";
            break;
        }
        if(r.size()>max)
            max=r.size();
    }
    cout<<max;
    return 0;
}
