#include <bits/stdc++.h>
using namespace std;

void printFiveTimes(int num = 0) {
    if(num == 5) {
        return;
    }
    cout << "name" << " ";
    printFiveTimes(num + 1);
}

int main()
{
    printFiveTimes();

    return 0;
}