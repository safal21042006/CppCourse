// SELECTION SORTING
#include<iostream>
using namespace std;
void SelectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int SI=i;  //SI=Smallest index(we suppose  index of first element of unsorted array as smallest index)
        for(int j=i+1;j<=n-1;j++){ // For comparison we start one element after SI
            if(arr[j]<arr[SI]){    // FOR SORTING IN DESCENDING ORDER WE CONVERT < TO >
                SI=j;
            }
        }
        swap(arr[i],arr[SI]);
    }
}
void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



int main(){
    int arr[]={4,1,5,2,3};
    int n=5;
    SelectionSort(arr,n);
    PrintArray(arr,n);
    return 0;
}

//Output-1 2 3 4 5 
// TC-O(n^2)