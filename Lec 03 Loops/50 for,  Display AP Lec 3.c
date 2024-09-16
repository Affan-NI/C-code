#include<stdio.h>

int main()
{
//Ques: Display this AP - 4,7,10,13,16.. upto 'n' terms. 
    int n;
    printf("Enter a number"); 
    scanf("%d",&n);
    printf("%d first term of A.P. is\n",n);
    for(int i=4; i<=3*n+1; i=i+3){ //nth term of this A.P=3n+1. 
        printf("%d,",i);
    }
    printf(".....");


    return 0;
}