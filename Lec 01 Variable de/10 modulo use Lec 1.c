#include<stdio.h>
int main(){
//a>b a ko b se divide karne par remender?
    int a,b; //a>b
    printf("Enter first no. =");
    scanf("%d",&a);
    printf("Enter second no.=");
    scanf("%d",&b);
    
    
    int r=a % b; // modulo ko chahe gap dekar likho ya nhi
    printf("Remender is=%d",r);
return 0;
}