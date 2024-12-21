// MAJORITY ELEMENT : It is the element that appear more than floor n/2 times
// Majority element>n/2 times in the array
// By brute force approach
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=5;
    vector<int>vec={1,2,2,1,1};
    for(int val : vec){
        int freq=0;
        for(int ele : vec){
            if(val==ele){
                freq+=1;
            }
        }
        if(freq>n/2){
         cout<<"majority element :"<<val<<endl;
         break;
        }

    }                 
}