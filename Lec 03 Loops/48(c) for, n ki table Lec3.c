#include<stdio.h>
int main()
{
//HW : Print the table of 'n'. Here 'n' is a integer which user will input.
    int n;
    printf("Enter a number: "); 
    scanf("%d",&n);
    printf("Table of %d is\n",n);
    for(int i=1;i<=10;i++){
    printf("%d × %d = %d \n",n,i,n*i);
    }



return 0;
}