#include<bits/stdc++.h>
using namespace std;


vector<int> SelectionSort(vector<int> arr) {
    for(int i = 0; i < arr.size()-1; i++) {
        int min = i;
        for(int j = i; j < arr.size(); j++) {
            if(arr[j] < arr[min]) min = j; 
        }
        int temp = arr[i]; 
        arr[i] = arr[min];
        arr[min] = temp;
    }
    return arr;
}

int main() {
    vector<int> arr = {12,28,26,27,2,8,83,73,19};

    arr = SelectionSort(arr);
    for(int i = 0; i < arr.size(); i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}