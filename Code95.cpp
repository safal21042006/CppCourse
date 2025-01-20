//  BINARY SEARCH USING RECURSION

#include<iostream>
using namespace std;
int BS(int arr[],int tar,int st,int end){
    while(st<=end){
        int mid=st+(end-st)/2;
        if(tar>arr[mid]){ // SEARCH IN 2ND HALF
            return BS(arr,tar,mid+1,end);
        }else if(tar<arr[mid]){ // SEARCH IN 1ST HALF
            return BS(arr,tar,st,mid-1);
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
    int arr[]={-1,0,3,5,9,12};
    int st=0,end=5,tar=0;
    cout<<"BINARY SEARCH INDEX IS:"<<BS(arr,tar,st,end)<<endl;
    return 0;
}