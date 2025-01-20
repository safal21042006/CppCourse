//Binary Seach

#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int>arr,int target){
    int st=0 ,end=arr.size() - 1;
    while(st<=end){
        int mid=(st+end)/2;
        if(target>arr[mid]){ // Search in second half(after mid)
            st=mid+1;
        }
        else if(target<arr[mid]){ // Search in first half(before mid)
            end=mid-1;
        }
        else{
            return mid; // Here arr[mid]==target so answer is mid(index)
        }
    }
    return -1;
}
int main(){
    vector<int>arr1={-1,0,1,3,5,6,7,9}; //EVEN
    int target1 = 9;
    cout<<binarysearch(arr1,target1)<<endl;

    vector<int>arr2={-1,0,3,5,6,12,18}; // ODD
    int target2 = 0;
    cout<<binarysearch(arr2,target2)<<endl;
    
     return 0;
}
