#include<bits/stdc++.h>
using namespace std;

void sapxep() {
	int arr[1000];
	for (int i = 0; i < 3; i++) {
		cin >> arr[i];
	};
	for (int i = 0; i < 3; i++) {
		for (int j = i + 1; j < 3; j++) {
			if (arr[i] > arr[j]) {
				int a = arr[i];
				arr[i] = arr[j];
				arr[j] = a;
			};
		};
	};
	for (int i = 0; i < 3; i++) {
		cout << arr[i] << " ";

	};
}
int main() {
	sapxep();
	return 0;
}