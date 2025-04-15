#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int D=(b*b-4*a*c);
    int m1=((-b)+sqrt(D))/2*a
    int m2=((-b)-sqrt(D))/2*a
    if(D>0){
        printf("CF = C1 * e^(%d * x) + C2 * e^(%d * x)\n", m1, m2);
    }
    else if(D==0){
        printf("CF = (C1 + C2 * x) * e^(%d * x)\n", m1);
    }
    
}