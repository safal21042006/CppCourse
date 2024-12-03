// Calculate the sum of digits of a number
#include<iostream>
using namespace std;
void sumofdigit(int n){
    int lastdigit;
    int seclastdig;  
    int firstdigit;
    lastdigit=n%10;// TO GET DIGIT SIMPLY MODULU BY 10 IT GIVES THE REMAINDER
    int num=n/10; // IT GIVES THE QUOTIENT SO WE GET TWO DIGIT NUMBER
    seclastdig=num%10;
    int num2=num/10;
    firstdigit=num2;
    int sum;
    sum=lastdigit+seclastdig+firstdigit;
    cout<<"SUM OF DIGITS:"<<sum<<endl;
}
int main(){
    sumofdigit(121);
    return 0;
}
