// TIME AND SPACE COMPLEXICITY
// FOR A CONSTANT : TIME COMPLEXICITY IS O(n) like jaha ek bhi loop nhi ho like for aur for loop ka andar condition ko bhi if else bhi constant hi li jati h aur inki time complexicity is O(n
// IF A VALUE IS DIVIDED IN ARRAY IN EACH INDEX THEN MOST PROBABLY ITS TIME COMPLEXICITY IS O(n)AND IT IS THE MOST OPTIMISED FORM AFTER O(k)


// compute x^n using binary exponentiation(LEETCODE QUESTION 50)
/* IF WE CALCULATE POW(x^n) AND CREATE ONLY ONE LOOP THEN LOOP RUN n TIMES AND TIME COMPLEXICITY IS O(n)
AND IN QUESTION HIGHEST VALUE OF X IS 2^31 WHICH IS GREATOR THAN 10^8 SO THIS PROCESS NOT DONE  */
/*REMEMBER:If A value in decimal is n then maximum no. of digits in binary form is log2n+1.For ex- if value is 8 then in 
binary form maximum no of digits is log2(8)+1=4 and in binary value is 1000
*/
/* SO if we create loop in n then loop jada baar chalega whi binary me convert krka chalanga toh kam chalega ex-n=8 me 2^8 me 
loop 8 times chalega whi binary form me 1000 ha aur loop 4 times hi chalega so time complexicity kam hogi[O(logn)]
*/
/* SO IN POWER EXPONENT HAM BINARY FORM ME LOOP LAGAYANGA*/

#include<iostream>
using namespace std;
double power(int x,int n){
     if(x==1) return 1.0;
        if(x==0) return 0.0;
        if(x==-1 && n%2==0) return 1.0;
        if(x==-1 && n%2!=0) return -1.0;
        if(n==0) return 1.0;
    long binform=n;
    double ans=1;
    if(binform<n){
        x=1/x;
        binform=-binform;
    }
    while(binform>0){
        if(binform % 2==1){
            ans*=x;
        }
        x=x*x;
        binform/=2;
    }
    return ans;
}
int main(){
    int x=3;
    int n=4;
   double result= power(3,4); // CALCULATING:3^4
   cout<<result<<endl;
   return 0;
}