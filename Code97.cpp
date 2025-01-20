// PEAK INDEX IN MOUNTAIN ARRAY (LEETCODE-852)
// BY BRUTE FORCE APPROACH 
// TIME COMPLEXICITY-O(n)
#include<iostream>
using namespace std;
int main(){
    int n=6;
    int arr[n]={0,3,8,9,5,2};
    for(int i=0;i<n;i++){
        if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
            cout<<"PEAK INDEX IN MOUNTAIN ARRAY:"<<i<<endl;
        }
    }
    return 0;
}