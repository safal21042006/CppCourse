// PREVIOUS QUESTION WITH THE HELP OF LOOP
#include<iostream>
using namespace std;
int main(){
int number;
int lastdigit;
int sumdigit=0;
cin>>number;
while(number>0){
    lastdigit=number%10;
    number=number/10;
    sumdigit+=lastdigit;
}
cout<<sumdigit;
return 0;
}