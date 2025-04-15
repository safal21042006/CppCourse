// PROGRAM FOR CF AND PI FOR MATH2

#include<stdio.h>
#include<climits>
int main(){
    int PositiveINFINITE=INT_MAX;
    int NegativeINFINITE=INT_MIN;
    printf("ENTER THE ROOTS OF AE \n");
    int m1,m2;
    scanf("%d%d",&m1,&m2);
    if(NegativeINFINITE<m1 && m2 <PositiveINFINITE && m1!=m2){ // CASE 1
       printf("CF = C1 * e^(%d * x) + C2 * e^(%d * x)\n", m1, m2);
    }
    else if(m1==m2){ //CASE2
        printf("CF = (C1 + C2 * x) * e^(%d * x)\n", m1);
    }
}
