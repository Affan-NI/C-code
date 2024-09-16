#include<stdio.h>
int main()
{
// WAP a program to find no of digit in given number.  
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    printf("no of digit is %d",count++);


return 0;
}