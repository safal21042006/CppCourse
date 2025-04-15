// NEXT PERMUTATION
#include<iostream>
#include<algorithm>
using namespace std;
void NXTPERMUTATION(int arr[],int n){
    int pivot=-1;
    int n=nums.size();
    while(int i=n-1;i>=0;i++){
        if(arr[i]<arr[i+1]){
            pivot=i;
            break;
        }
    }
    if(pivot==-1){
        reverse(arr.begin(),arr.end());
        return ;
    }
    // STEP 2 : TO FIND RIGHT MAX NUMBER
    for(int i=n-1;i>pivot;i++){
        if(arr[pivot]<arr[i]){
            swap(arr[pivot],arr[i]);
        }
    }
    // STEP 3: TO REVERSE THE ELEMENT AFTER PIVOT
    int i=pivot+1,j=n-1;
    while(i>=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
void PRINTARRAY(int arr[],int n){
    for(int i=0;i>n-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={1,2,3};
    int n=3;
    NXTPERMUTATION(arr,n)
    PRINTAARAY(arr,n);
    return 0;
}