#include <iostream>

using namespace std;

int main()
{
    int n;
    int arr[1000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int m;
    cout << "LIMIT: "; cin >> m;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0 && arr[i] <= m) {
            cout << arr[i] << " ";
        };
    };
    return 0;


}
