// Binary Search In a rotated sorted array
// LEETCODE-33
#include<iostream>
#include<vector>
using namespace std;
int RSA(vector<int>arr,int target){
    int st=0,end=arr.size()-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==target){
            return mid;
        }
        if(arr[st]<mid){ //CONDITION FOR CHECKING WHICH SIDE IS SORTED ARRAY(LEFT SIDE SORTED HERE)
           if(arr[st]<=target && target<=arr[mid]){
            end=mid-1;
           }
           else{ // RIGHT SIDE CHECKING
            st=mid+1;
           }
        }
        else{ // RIGHT SIDE SHORTED ARRAY
            if(arr[mid]<=target && target<=arr[end]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
    return -1;
}
int main(){
    int target=0;
    vector<int>arr={6,7,0,1,2,3,4,5};
    cout<<"RSA:"<<RSA(arr,target)<<endl;
    return 0;
}