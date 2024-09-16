#include<stdio.h>
int main(){
    // swap meaning a and b ko interchang karna.
    int a;
    printf("Enter a ");
    scanf("%d",&a);
    int b;
    printf("Enter b ");
    scanf("%d",&b);
    int temp;   //temporary
    temp=a;
    a=b;
    b=temp;
    printf("The valu of a %d\n",a);
     printf("The valu of b %d",b);
    return 0;
}