// ARRAY
#include<iostream>
#include<array>
using namespace std;
int main(){
    int marks[5]={95,77,79,84,89};// AGAR JITNA INPUT ME NUMBER DIYA HO UTNA HI SIZE KA ARRAY CHAHIYA HO TOH SIZE DENA KI JARURAT NHI HA
        marks[3]=74;
    cout<<marks[0]<<endl;// array me index 0 se size-1 tak jta h
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;

    cout<<sizeof(marks)/sizeof(int)<<endl; // ONE INT OF ARRAY CARRY 4BITS SO MARKS ME 5INT CARRY 20BITS AND IF WE DIVIDE 20 BITS BY NO.OF INTEGER THEN WE GET NO.OF INT
    // LOOP
    for(int i=0;i<5;i++){
        cout<<marks[i]<<" ";
    }cout<<endl;
    return 0;

}