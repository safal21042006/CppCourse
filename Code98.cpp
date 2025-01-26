// PEAK INDEX IN MOUNTAIN ARRAY (LEETCODE-852)
// BY OPTIMISED FORM
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n=6;
    int arr[n]={0,3,8,9,5,2};
    int st=0,end=5;
    int largest=INT_MIN;
    int largest_index=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if ((mid == 0 || arr[mid - 1] < arr[mid]) && (mid == n - 1 || arr[mid + 1] < arr[mid])) {

            cout<<"PEAK index:"<<mid<<endl;
            break;
        }
        else if(arr[st]<arr[mid]){ // LEFT SORTED ARRAY
            st=mid+1;
            for(int i=st;i<n;i++){
                if(arr[i]>largest){
                    largest=arr[i];
                    largest_index=i;
                }
            }
             cout<<"PEAK index:"<<largest_index<<endl;
             break;
             
        }
         
        else{
            end=mid-1;
            for(int i=st;i<=end;i++){ // Right Side sorted array
                 if(arr[i]>largest){
                    largest=arr[i];
                    largest_index=i;
                 }
            }
           cout<<"PEAK index:"<<largest_index<<endl;
           break;
        }
    }
    return 0;
}