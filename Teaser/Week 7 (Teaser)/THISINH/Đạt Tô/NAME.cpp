#include<iostream>
#include<string>

using namespace std;
int main()
    {      int h,i;
        string s;
        getline(cin,s);
        if(s[0]==' ')
            {for(i=0;i<s.size();i++)
                {
                    if(s[i]!=' ')
                        {s.erase(0,i-0);break;}
                }
            }
        if(s[0]>='a'&&s[0]<='z'){s[0]=s[0]-32;}
for(int i=1;i<s.size();i++)
{
    if(s[i]>='A'&&s[i]<='Z'){s[i]=s[i]+32;}
    else if(s[i]==' ')
            {for(int h=i;h<s.size();h++)
                    {
                        if(s[h]!=' ')
                            {
                                s.erase(i,h-i-1);break;
                            }
                    }
            }
        if(s[i]!=' '&&s[i-1]==' '){

            if(s[i]>='a'&&s[i]<='z'){s[i]=s[i]-32;}

        }

}
    cout<<s;
    }
