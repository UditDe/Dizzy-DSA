#include <bits/stdc++.h>
using namespace std;

int countSubseq(int arr[], int size, int sum, vector<int> &ds, int indx = 0, int initialSum = 0)
{
    if (size == indx)
    {
        if (sum == initialSum)
        {
            return 1;
        }
        else
        {
            return 0;
        };
    }

    // include
    initialSum += arr[indx];
    ds.push_back(arr[indx]);
    int n1 = countSubseq(arr, size, sum, ds, indx + 1, initialSum);

    // not include
    initialSum -= arr[indx];
    ds.pop_back();
    int n2 = countSubseq(arr, size, sum, ds, indx + 1, initialSum);

    return n1 + n2;
}

int main()
{
    int arr[] = {4, 5, 6, 2, 1, 0, 4};
    int size = 7;
    int sum = 9;
    vector<int> v1;
    cout << countSubseq(arr, size, sum, v1);
    return 0;
}