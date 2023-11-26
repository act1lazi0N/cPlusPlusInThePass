#include<iostream>
#include<string>

using namespace std;
int main()
    {   bool r=false;
        int x,y,k,dem=0;
        cin>>x>>y>>k;
        fflush(stdin);
        string s;
        getline(cin,s);
        int x1=0,y1=0;
                if(x1==x&&y1==y){cout<<dem<<endl;r=true;}
                else if(x1==x+1&&y1==y){cout<<dem<<endl;r=true;}
                else if(x1==x-1&&y1==y){cout<<dem<<endl;r=true;}
                else if(x1==x&&y1==y+1){cout<<dem<<endl;r=true;}
                else if(x1==x&&y1==y-1){cout<<dem<<endl;r=true;}
                else if(x1==x-1&&y1==y+1){cout<<dem<<endl;r=true;}
                else if(x1==x+1&&y1==y+1){cout<<dem<<endl;r=true;}
                else if(x1==x-1&&y1==y-1){cout<<dem<<endl;r=true;}
                else if(x1==x+1&&y1==y-1){cout<<dem<<endl;r=true;}
        for(int i=0;i<s.size();i++)
        {   dem++;
            switch(s[i])
            {
            case 'R':
                {
                    x1=x1+1;
                    break;
                }
            case'L':
                {
                    x1=x1-1;
                    break;
                }
            case'U':
                {
                    y1=y1+1;
                    break;
                }
            case'D':
                {
                    y1=y1-1;
                    break;
                }
            }


                if(x1==x&&y1==y){cout<<dem<<endl;r=true;}
                else if(x1==x+1&&y1==y){cout<<dem<<endl;r=true;}
                else if(x1==x-1&&y1==y){cout<<dem<<endl;r=true;}
                else if(x1==x&&y1==y+1){cout<<dem<<endl;r=true;}
                else if(x1==x&&y1==y-1){cout<<dem<<endl;r=true;}
                else if(x1==x-1&&y1==y+1){cout<<dem<<endl;r=true;}
                else if(x1==x+1&&y1==y+1){cout<<dem<<endl;r=true;}
                else if(x1==x-1&&y1==y-1){cout<<dem<<endl;r=true;}
                else if(x1==x+1&&y1==y-1){cout<<dem<<endl;r=true;}




        }
    if(r==false)cout<<"-1";


    }
