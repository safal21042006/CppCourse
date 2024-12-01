/* HW QUES
MADE A CALCULATOR*/

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"ENTER THE NUMBER"<<endl;
    cin>>a>>b;
    int sum=a+b;
    int product =a*b;
    int difference =a-b;
    float divison=a/b;
    int modulu=a%b;

    cout<<"SUM IS:"<<sum<<endl;
    cout<<"PRODUCT IS:"<<product<<endl;
    cout<<"DIFFERENCE IS:"<<difference<<endl;
    cout<<"DIVISION IS:"<<divison<<endl;
    cout<<"MODULU IS:"<<modulu<<endl;
    return 0;
}