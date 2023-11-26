#include<bits/stdc++.h>
using namespace std;
int main()
{  string s;
  char thanh[100][100];
  int j=0,ctr=0;
 getline(cin,s);
   int dem= (s[0] != ' ');
   for (int i = 0; i <=s.size() ; i++)
    {
        if (s[i] == ' '|| s[i]=='\0')
        {
            dem++;
            thanh[ctr][j]='\0';
            ctr++;
            j=0;

        } else
        {
            thanh[ctr][j]=s[i];
            j++;
        }
    }
    cout<<dem<<endl;
    for(int i=0;i < ctr;i++)
        cout<<thanh[i]<<endl ;

}
