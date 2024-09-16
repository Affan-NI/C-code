#include<stdio.h>

int main()
{
//Ques: Display this AP - 1,3,5,7,9.. upto 'n' terms. 
    int n;
    printf("Enter a number"); 
    scanf("%d",&n);
    for(int i=1; i<=2*n-1; i=i+2){ //nth term of this A.P=2n-1
        printf("%d,",i);
    }
    printf(".....");


    return 0;
}