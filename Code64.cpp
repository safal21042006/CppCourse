#include<iostream> // FINDING THE MAX VALUE
#include<climits>
using namespace std;
int main(){
    int smallest=INT_MAX;
    int marks[5]={5,20,3,84,28};
    for(int i=0;i<5;i++){
        if(marks[i]<smallest){
            smallest=marks[i];
        }
    }
    cout<<smallest<<endl;
    return 0;
}
