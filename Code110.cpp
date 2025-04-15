// INSERTION SORT
#include<iostream>
using namespace std;
void InsertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
     int curr=arr[i];
     int prev=i-1;
     while(prev>=0 && arr[prev]>curr){ //FOR DESCENDING ORDER WE CHANGE > SIGN TO < 
        arr[prev+1]=arr[prev];
        prev--;
     }
     arr[prev+1]=curr;  //Placing the current element at its correct position
    }
}
void PrintArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={4,1,5,2,3};
    int n=5;
    InsertionSort(arr,n);
    PrintArr(arr,n);
}

// OUTPUT-1 2 3 4 5
// TC-O(n)