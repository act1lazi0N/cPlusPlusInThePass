#include <bits/stdc++.h>

using namespace std;
bool numSTEP(int k){
    if(k>10){
        while(k!=0){
            int temp = k%10;
            k = k/10;
            if((k%10)>temp){
                return false;
            }
        }
        return true;
    }
    return false;
}
int main()
{
    freopen("STEP.INP","r",stdin);
    freopen("STEP.OUT","w",stdout);
    int n;
    cin>>n;
    int d=0;
    for(int i=1; i<=n; i++){
        int temp;
        cin>>temp;
        if(numSTEP(temp)) d++;
    }
    cout<<d;
    return 0;
}
