// OPTIMISED FORM:USING SORTED 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int arr[n]={1,2,2,1,2};
    sort(arr,arr+n);
    int freq=1,ans=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                freq++;
            }else{
                freq=1;
                ans=arr[i];
            }
            if(freq>n/2){
                cout<<ans<<endl;
            }
        }
        
}