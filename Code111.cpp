// SORT AN ARRAY OF 0s,1s,2s

//BY BRUTE FORCE APPROACH 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void BFSRT(vector<int>&arr,int n){
    sort(arr.begin(),arr.end());
}
void PrintArr(const vector<int>&arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>arr={2,0,2,1,1,0,1,2,0,0};
    int n=arr.size();
    BFSRT(arr,n);
    PrintArr(arr,n);
    return 0;
}