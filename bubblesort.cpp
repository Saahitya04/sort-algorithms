#include<bits/stdc++.h>
using namespace std;


vector<int> BubbleSort(vector<int> arr) {
    int n = arr.size();
    for(int i = 0; i < n-1; i++) {
        bool not_swaped = true;
        for(int j = 0; j < n-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                //swap(arr[j],arr[j+1]);
                not_swaped = false;
            }
        }
        if(not_swaped) break;
    }
    return arr;
}

int main() {
    vector<int> arr = {12,28,26,27,2,8,83,73,19};

    arr = BubbleSort(arr);
    for(int i = 0; i < arr.size(); i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}