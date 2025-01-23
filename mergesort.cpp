#include<bits/stdc++.h>
using namespace std;


vector<int> MergeSort(vector<int> arr) {

}

int main() {
    vector<int> arr = {12,28,26,27,2,8,83,73,19};

    arr = MergeSort(arr);
    for(int i = 0; i < arr.size(); i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}