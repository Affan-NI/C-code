#include<stdio.h>

int main()
{
// HW : Display this GP - 100,50,25,.. upto ‘n’term .    
   int n; // itne baar loop chalega.  
    printf("Enter a number"); 
    scanf("%d",&n);
    float a=100;
    for(int i=1; i<=n; i++){  
        printf("%f, ",a);
        a=a/2;
    }


    return 0;
}