#include<stdio.h>

int main()
{
//Ques: Take positive integer input and tell if it is divisible by 5 or 3.
int n;
printf("Enter a number: ");
scanf("%d",&n);
if(n%5==0 || n%3==0){

    printf("it is divisible by 5 or 3");
}
else {

    printf("it is not divisible by 5 or 3");
}
    
    return 0;
}