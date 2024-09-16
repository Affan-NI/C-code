#include<stdio.h>

int main()
{
// Ques: Take positive integer input and tell if it is divisible by 5 and 3.
int n;
printf("Enter a number: ");
scanf("%d",&n);
if(n%5==0 && n%3==0){ //n%15==0

printf("%d is divisible by 5 & 3",n);

}
else{
    printf("%d is not divisible by 5 & 3",n);
}
    
    return 0;
}