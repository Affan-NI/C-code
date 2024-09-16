#include<stdio.h>

int main()
{
// Take four positive integer and print the greatest.
    int a,b,c,d;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    printf("Enter 3rd number: ");
    scanf("%d",&c);
    printf("Enter 4rth number: ");
    scanf("%d",&d);
if(a>b && a>c && a>d){
printf("1st number is the greatest");
}
if(b>a && b>c && b>d){
printf("2nd number is the greatest");
}
if(c>a && c>b && c>d){
printf("3rd number is the greatest");
}
if(d>a && d>b && d>c){
printf("4rth number is the greatest");
}
    return 0;
}