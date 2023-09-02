#include <bits/stdc++.h>
using namespace std;

// printing all the subseqs whose sum is equal to some given stuffs
void printSumSubSeq(int arr[], int size, int sum, vector<int> &ds, int indx = 0, int initailSum = 0)
{
    // cout << initailSum << " ";
    if (indx >= size)
    {
        if (sum == initailSum)
        {
            for (auto x : ds)
            {
                cout << x << " ";
            }
            cout << "\n";
        }
        return;
    }
    // include that element
    initailSum += arr[indx];
    ds.push_back(arr[indx]);
    printSumSubSeq(arr, size, sum, ds, indx + 1, initailSum);

    // not include that element
    initailSum -= arr[indx];
    ds.pop_back();
    printSumSubSeq(arr, size, sum, ds, indx + 1, initailSum);
}

// printing only One seq
bool printOneSumSubSeq(int arr[], int size, int sum, vector<int> &ds, int indx = 0, int initailSum = 0)
{
    // cout << initailSum << " ";
    if (indx >= size)
    {
        if (sum == initailSum)
        {
            for (auto x : ds)
            {
                cout << x << " ";
            }
            // cout << "\n";
            return true;
        }
        return false;
    }
    // include that element
    initailSum += arr[indx];
    ds.push_back(arr[indx]);
    if (printOneSumSubSeq(arr, size, sum, ds, indx + 1, initailSum))
        return true;

    // not include that element
    initailSum -= arr[indx];
    ds.pop_back();
    if (printOneSumSubSeq(arr, size, sum, ds, indx + 1, initailSum))
        return true;

    return false;
}

int main()
{
    int arr[] = {4, 5, 6, 2, 1, 0, 4};
    int size = 7;
    int sum = 9;
    vector<int> v1;
    // printOneSumSubSeq(arr, size, sum, v1);
    printSumSubSeq(arr, size, sum, v1);

    return 0;
}