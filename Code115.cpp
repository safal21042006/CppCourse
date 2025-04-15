// SORT ARRAY WITH 0s,1s,2s
// BY APPROACH 3 => DUTCH NATIONAL FLAG ALGORITHM 
#include<iostream>
using namespace std;
void SORT(int arr[],int n){
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[high],arr[mid]);
            high--;
        }
    }
}

void PRINTARRAY(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]={2,0,2,1,1,0,1,2,0,0};
    int n=10;
    SORT(arr,n);
    PRINTARRAY(arr,n);
    return 0;
}