#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n :- ";
    cin>>n;
    int arr[n] ;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        int min_index = i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
        
    }
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
}
