#include<stdio.h>
int main(){// f
// fibonacci series===   1,1,2,3,5,8,13....  arthat koi bhi term apne se pehle 2 term ka yoog hai
// print the nth term.
    int n;
    printf("Enter a no. ");
    scanf("%d",&n);
    int a=1;
    int b=1;
    int sum=1;
    for(int i=1; i<=(n-2); i++){
         sum=a+b;
         a=b;
         b=sum;
    }
    
    printf("%dth term of series is =%d ",n,sum);
   
   
   




    return 0;
}