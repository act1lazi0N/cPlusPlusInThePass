#include<bits/stdc++.h>
using namespace std;

void xacdinh(int a[]) {
	
	for (int i = 0; i < 4; i++) {
		
		cin >> a[i];
	};
}
int findmax(int a[])
{
	int max = a[0];
	for (int i = 1; i < 4; i++) {
		if (max < a[i]) {
			max = a[i];
		};
	};
	return max;
}
int findmin(int a[])
{
	int min = a[0];
	for (int i = 1; i < 4; i++) {
		if (min > a[i]) {
			min = a[i];
		};
	};
	return min;
}
int main() {
	

	int a[1000];
	xacdinh(a);
	int min = findmin(a);
	int	max = findmax(a);
	cout << min << " " << max << endl;
	return 0;

}
