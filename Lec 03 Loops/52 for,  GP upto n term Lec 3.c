#include<stdio.h>

int main()
{
//Ques: Display this GP-1,2,4,8,16,32,.. upto 'n'term.   

   int n; // itne baar loop chalega.  
    printf("Enter a number"); 
    scanf("%d",&n);
    int a=1;
    for(int i=1; i<=n; i++){  
        printf("%d,",a);
        a=a*2;
    }


    return 0;
}