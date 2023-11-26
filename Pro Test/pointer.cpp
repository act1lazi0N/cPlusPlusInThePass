#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[1000];
	for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int* p = a; p < a + n; p++)
    {
        cout << *p << "\n";
        cout << p << "\n";
        cout << &a << "\n";
        cout << a << "\n";
        cout << *&a << "\n";
    }
}
