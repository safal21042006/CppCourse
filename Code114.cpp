// SORT AN ARRAY OF 0s,1s,2s
#include<iostream>
using namespace std;
void SORTARRAY(int arr[],int n){
    int COUNT0=0;
    int COUNT1=0;
    int COUNT2=0;
    // O(n)
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            COUNT0+=1;
        }
        else if(arr[i]==1){
            COUNT1+=1;
        }
        else{
            COUNT2+=1;
        }
    }
    // O(n)
    int INDEX=0;
    for(int i=0;i<COUNT0;i++){
        arr[INDEX++]=0;   // INDEX++ MATLAB PEHALA 0 KO PUT KRO PHIR INDEX KO 1 SE ADD KRO SO PEHALA INDEX ZERO PE VALUE DALO PHIR EK SE INDEX KO BADAO
    }
    for(int i=0;i<COUNT1;i++){
        arr[INDEX++]=1;
    }
    for(int i=0;i<COUNT2;i++){
        arr[INDEX++]=2;
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
    SORTARRAY(arr,n);
    PRINTARRAY(arr,n);
    return 0;
}
// TC=>O(2n)=O(n)
