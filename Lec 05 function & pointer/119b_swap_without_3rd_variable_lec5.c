#include<stdio.h>
int main(){
    // swap without 3rd variable
    int a;
    printf("Enter a ");
    scanf("%d",&a);
    int b;
    printf("Enter b ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The valu of a %d\n",a);
     printf("The valu of b %d",b);
    return 0;
}