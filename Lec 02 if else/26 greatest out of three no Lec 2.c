#include<stdio.h>

int main()
{
//*Ques: Take 3 positive integers input and print the greatest of them. all three are distinct.
 int a,b,c;
printf("Enter a number: ");
scanf("%d",&a);
printf("Enter second number: ");
scanf("%d",&b);
printf("Enter third number: ");
scanf("%d",&c);
if(a>b && a>c){
    printf("%d is greatest",a);
}
if(b>a && b>c){
    printf("%d is greatest",b);
}
if(c>b && c>a){
    printf("%d is greatest",c);
}
    return 0;
}