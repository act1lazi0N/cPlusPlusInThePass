#include<bits/stdc++.h>
using namespace std;
bool can(string si) {
    vector<char> s;
    for(int i = 0; i < si.size(); i++) {
        if(si[i] == '(') {
            s.push_back(si[i]);
        } else {

            if(s.size() == 0) {
                return false;
            }
            char c = s.back();
            s.pop_back();

if(c == '(' && si[i] != ')') {
                return false;
            }

            }
        }

    if(s.size() == 0) {
        return true;
    } else {
        return false;
    }
}
int main()
{  string s;
  int t=0;
  cin>>s;
  for(int i=0;i<=s.size()-1;i++)
  {  if(s[i]!='(' &&s[i]!=')' )
       t=1;
       break;}
       if(t!=0) cout<<"Khong hop le";
    else{ if(can(s)==1) cout<< "DUNG";
          else cout<<"KHONG DUNG";

  }


    }
