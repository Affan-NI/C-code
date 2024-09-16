#include<stdio.h>
int main()
{
//HW : Print the table of 'n'. Here 'n' is a integer which user will input.
    int n;
    printf("Enter a number: "); 
    scanf("%d",&n);
    printf("Table of %d is\n",n);
    for(int i=n; i<=10*n; i=i+n){
        int z=i/n;
        printf("%d x %d = %d \n",n,z,i);
    }



return 0;
}