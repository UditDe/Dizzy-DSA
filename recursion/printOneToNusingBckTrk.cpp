// print 1 to N => but using backtracking
// print N to 1 => but using backtracking

#include<bits/stdc++.h>
using namespace std;

void printOnetoNUsingBackTrack(int n) {
    if(n == 0) {
        return;
    }
    printOnetoNUsingBackTrack(n - 1);
    cout << n << " ";
}

void printNtoOne(int n, int i = 1) {
    if(n < i) {
        return;
    }
    printNtoOne(n, i + 1);
    cout << i << " ";
}



int main() {
    int n;
    cin >> n;
    printOnetoNUsingBackTrack(n);
    cout << "\n";
    printNtoOne(n);
    return 0;
}