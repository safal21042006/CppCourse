// REVERSE AN ARRAY
// FOR REVERSING WE CANT MAKE SECOND ARRAY MAKE CHANGES IN FIRST ARRAY
// SOLVE BY USING TWO POINTER ALGORITM
#include<iostream>
using namespace std;
int main(){
    int start=0;
     int size=5;
    int end=size-1;
    int arr[size]={63,47,84,74,27};
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}