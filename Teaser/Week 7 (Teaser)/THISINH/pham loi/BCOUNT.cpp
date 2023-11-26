#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int s0=0,s1=0,s2=0,s3=0,s4=0,s5=0,s6=0,s7=0,s8=0,s9=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')s0++;
        if(s[i]=='1')s1++;
        if(s[i]=='2')s2++;
        if(s[i]=='3')s3++;
        if(s[i]=='4')s4++;
        if(s[i]=='5')s5++;
        if(s[i]=='6')s6++;
        if(s[i]=='7')s7++;
        if(s[i]=='8')s8++;
        if(s[i]=='9')s9++;
    }
    cout<<s0<<" "<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<" "<<s5<<" "<<s6<<" "<<s7<<" "<<s8<<" "<<s9;
}
