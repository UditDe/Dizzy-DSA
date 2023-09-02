// subsequences => a contgious or non contgious seq which follows the order

// this problem can be solved using power set algo

#include <bits/stdc++.h>
using namespace std;

// SC => n (heigth of tree)
// TC => n * 2^n ( n => forloop ), (2^n => every element has 2 options to pick or not pick)
void printAllSubSeq(int arr[], int size, vector<int> &ds, int indx = 0)
{
    if (indx == size)
    {
        for (auto x : ds)
        {
            cout << x << " ";
        }
        if (size == 0)
        {
            cout << "null";
        }
        cout << "\n";
        return;
    }

    // adding part => pick that index
    ds.push_back(arr[indx]);
    printAllSubSeq(arr, size, ds, indx + 1);

    // remove part => not pick
    ds.pop_back();
    printAllSubSeq(arr, size, ds, indx + 1);
}

int main()
{
    int arr[] = {3, 4, 2, 1, 5, 9, 7};
    int n = 3;
    vector<int> ds;
    printAllSubSeq(arr, n, ds);
    return 0;
}