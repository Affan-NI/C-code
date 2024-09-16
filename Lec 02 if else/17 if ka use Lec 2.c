#include<stdio.h>
int main()
{
    int n;
    printf("Enter a integer ");
    scanf("%d",&n);
    if(n%2==0){
        
        printf("Even number");
    }
    if(n%2!=0){
        printf("odd number");
    }
return 0;
}