#include<bits/stdc++.h>
#define ll long long
#define N 102
using namespace std;
int p[N],x[N],truocx[N],y[N];int n,d;
int main(){
	freopen("NGHICHTHE2.INP","r",stdin);
	freopen("NGHICHTHE2.OUT","w",stdout);
	cin>>n;
	for(int k=1;k<=n;k++) {
		cin >> p[k];
		
 	}
	for(int k=0;k<n;k++) {
		y[k+1]=n-k;
		truocx[k+1]=n-(n-k);
 	}
	int j=n;
 	while (j>=1){
 		for(int i=1;i<=n;i++){
			if(truocx[i]==p[j]){
			x[j]=y[i];
			truocx[i]=-1;
			for(int t=i+1;t<=n;t++) truocx[t]--;
			break;
			}
		}
		j--;
	}
    for(int j=1;j<=n;j++) {
		cout << x[j]<<" ";
 	}

	return 0;
}
