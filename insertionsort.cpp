#include<bits/stdc++.h>
using namespace std;


vector<int> InsertionSort(vector<int> arr) {
    int n = arr.size();

    for(int i = 0; i < n; i++) {
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]) {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
    return arr;
}

int main() {
    vector<int> arr = {12,28,26,27,2,8,83,73,19};

    arr = InsertionSort(arr);
    for(int i = 0; i < arr.size(); i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}