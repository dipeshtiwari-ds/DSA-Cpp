#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low , int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j){
        while(arr[i] <= pivot && i < high){
            i++;
        }
        while(arr[j] > pivot && j > low){
            j--;
        }
        if(i < j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}
void MS(vector<int> &arr, int low, int high){
    if(low < high){
        int pIndex = partition(arr, low , high);
        MS(arr, low, pIndex - 1);
        MS(arr, pIndex + 1, high);
    }
}

int main(){
    vector<int> arr = {4,6,2,5,7,9,1,3};
    int n = arr.size();
    MS(arr,0,n-1);
    for(int x : arr){
        cout<<x<<endl;
    }
    return 0;
}