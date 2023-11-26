#include<bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("2338.inp","r",stdin);
//	freopen("2338.out","w",stdout);
	double c;
	cin>> c;
	double l= 0, r= 1e5;
	while(r-l>1e-7) 
	{
		double m=(l+r)/2;
		if(m*m+sqrt(m)<c) 
			l= m;
		else 
			r= m;
	}
	cout<< setprecision(6)<< fixed<< l;
	return 0;
}
