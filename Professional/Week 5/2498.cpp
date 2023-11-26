#include <bits/stdc++.h>
using namespace std;
int main(){
	//freopen("2498.INP","r",stdin);
	//freopen("2498.OUT","w",stdout);
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
		int m,b;
		cin>>m>>b;
		long long ans=0;
		for (int y=0;y<=b;y++){
			int x=m*(b-y);
			ans=max(ans,(long long)(x+1)*(y+1)*(x+y)/2);
		}
		cout<<ans<<endl;
    }
}
