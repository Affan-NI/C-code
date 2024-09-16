#include<stdio.h>

int main()
{
//Ques: Display this AP - 4,7,10,13,16.. upto 'n' terms.
// without finding nth term solve karo 
    int n; // itne baar loop chalega.  
    printf("Enter a number"); 
    scanf("%d",&n);
    int a=4;
    for(int i=1; i<=n; i++){  
        printf("%d,",a);
        a=a+3;
    }
    


    return 0;
}