#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int h, int l = 0) {
    if(l >= h) {
        return;
    }
    swap(arr[l], arr[h - 1]);
    reverse(arr, h - 1, l + 1);
}

int main(){
    int size;
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    reverse(arr, size);
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}