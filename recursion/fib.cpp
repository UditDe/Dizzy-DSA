#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    else if (n <= 2)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

/*
        f(2) => 1
f(4) => +
        f(3) => 1
*/

int main()
{
    int n;
    cin >> n;
    cout << fib(n);
    return 0;
}

// TC => 2^n