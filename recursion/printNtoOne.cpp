#include <bits/stdc++.h>
using namespace std;

void printLinearly(int limit) {
    if(limit == 0) {
        return;
    }
    cout << limit << " ";
    printLinearly(limit - 1);
}

int main(){
    int lim;
    cin >> lim;
    printLinearly(lim);
    return 0;
}