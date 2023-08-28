#include <bits/stdc++.h>
using namespace std;

// parameterised Way!!
void sumOfN_P(int n, int sum = 0) {
    if(n < 1) {
        cout << sum << "\n";
        return;
    }
    sumOfN_P(n - 1, sum + n);
}

// function itself return ans
int sumOfN_F(int n) {
    if(n < 1) {
        return 0;
    }
    return sumOfN_F(n - 1) + n;
}

int main(){
    int n;
    cin >> n;
    sumOfN_P(n);
    cout << sumOfN_F(n);
    return 0;
}