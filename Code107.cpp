// SORTING LECTURE-24
// 3 Algoritms are study here 
// First algoritm - Bubble sort 

#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
    bool isSwap=false;
    for(int i=0;i<=n-1;i++){   // O(n)
        for(int j=0;j<=n-i-1;j++){ // O(n*n)=O(n^2)
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }
        }
        if(!isSwap){  //Array already sorted
            return;
        }
    }
}

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n=5;
    int arr[]={4,1,5,2,3};
    bubblesort(arr,n);
    printArr(arr,n);
    return 0;
}