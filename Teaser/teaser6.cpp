#include <iostream>
#include <cmath>
using namespace std;

void getInput(int* arr, int& n) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

bool isPerfectNumber(int n) {
    if(n < 2) {
        return false;
    }
    int sum = 1;
    int bound = (int)sqrt(n);
    for (int i = 2; i <= bound; i++) {
        if(n % i == 0) {
            if(n / i == i) {
                sum += i;
            } else {
                sum += i;
                sum += n / i;
            }
        }
    }
    return sum == n;
}

void listedPerfectNumber(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        if(isPerfectNumber(arr[i])) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[100];
    int n;
    getInput(arr, n);
    listedPerfectNumber(arr, n);
    return 0;
}
