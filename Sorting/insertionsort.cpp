#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n :- ";
    cin>>n;
    int arr[n];
    for(int i=0; i<=n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        int j=i;
        while(j>0 && arr[j-1] > arr[j]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}