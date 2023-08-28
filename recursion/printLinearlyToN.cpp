#include <bits/stdc++.h>
using namespace std;

void printLinearly(int limit, int n = 1) {
    if(limit + 1 == n) {
        return;
    }
    cout << n << " ";
    printLinearly(limit, n + 1);
}

int main(){
    int lim;
    cin >> lim;
    printLinearly(lim);
    return 0;
}