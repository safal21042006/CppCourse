#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Please enter the number"<<endl;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        int temp;
        cin>>temp;
        arr[i]=temp;
    }
    for(int j=0;j<num;j++){
        cout<<arr[j]<<" ";
    }
    return 0;

}