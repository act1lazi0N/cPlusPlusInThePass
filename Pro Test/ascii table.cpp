#include<bits/stdc++.h>
using namespace std;

int main()
{
    for (char c{' '}; c <= '~'; c++) {
        cout << c << ((c+1) % 32 ? ' ' : '\n') << " " << c - 32 << "\n";
    }
}
