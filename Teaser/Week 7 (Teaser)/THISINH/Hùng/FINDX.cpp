#include<bits/stdc++.h>
using namespace std;
int main()
{  string s;
vector<int> mt;
  char x;
  cin>>x;
  std::fflush(stdin);
 getline(cin ,s);
  int t=0;
    for(int i=0;i< s.size();i++)
    { if(s[i]== x) {t++;
        mt.push_back(i);}
    }
    cout<< t<<endl;
    for(int i=0;i< t;i++)
    { cout<< mt[i]<<" ";}
    }
