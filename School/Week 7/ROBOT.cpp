#include<bits/stdc++.h>
using namespace std;
int main()
    {
        string s;
        int n,x=0,y=0;
        char p='B';
        cin>>n;
        fflush(stdin);
        getline(cin,s);
        for(int i=0;i<s.size();i++)
        {
            switch(s[i])
            {
            case 'R':
                {
                  if(p=='B'){x=x+1;p='D';}
                    else if(p=='D'){y=y-1;p='N';}
                    else if(p='T'){y=y+1;p='B';}
                    else if(p='N'){x=x-1;p='T';}
                  break;
                }
            case'L':
                {
                    if(p=='B'){x=x-1;p='T';}
                    else if(p=='T'){y=y-1;p='N';}
                    else if(p=='N'){x=x+1;p='D';}
                    else if(p=='D'){y=y+1;p='B';}
                    break;

                }
            case'G':
                {
                   if(p=='B'){y=y+1;p='B';}
                   else if(p=='D'){x=x+1;p='D';}
                   else if(p=='T'){x=x-1;p='T';}
                   else if(p=='N'){y=y-1;p='N';}
                   break;
                }
            case'B':
                {
                    if(p=='B'){y=y-1;p='N';}
                    else if(p=='N'){y=y+1;p='B';}
                    else if(p=='T'){x=x+1;p='D';}
                    else if(p=='D'){x=x-1;p='T';}
                    break;

                }
            }
        }
        cout<< x << " "<< y;
    }
