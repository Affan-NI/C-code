#include<stdio.h>
int main(){
//a>b a ko b se divide karne par remender?
    int a,b; //a>b
    printf("Enter first no. =");
    scanf("%d",&a);
    printf("Enter second no.=");
    scanf("%d",&b);
    int q=a/b;    // q=quotient
    int r=a-b*q;  //diviend=divisor*quotient+Remender 
    printf("Remender when %d is divided by %d is=%d",a,b,r);
    
    
    
return 0;
}