//Lecture 24
// Bubble Sort
#include<iostream>
using namespace std;
void Bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){ //NO OF TIMES(LOOP) IN WHICH FULL SORTING DONE
    bool isSwap = false; // This is the optimisation used if array is already sorted then we got direct return array
        for(int j=0;j<n-i-1;j++){ //NO OF SWAP INSIDE THE ARRAY
            if(arr[j]>arr[j+1]){   //FOR SORTING IN DESCENDING ORDER WE CONVERT > TO <
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }
        }
        if(isSwap=false){ //array is already sorted 
            return;
        }
    }
}
void PrintArray(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={4,1,5,2,3};
    int n=5;
    Bubblesort(arr,n);
    PrintArray(arr,n);
    return 0;
}

//OUTPUT- 1 2 3 4 5 
//TC-O(n^2)