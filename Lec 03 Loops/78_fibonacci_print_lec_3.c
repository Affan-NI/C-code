#include<stdio.h>
int main(){
// fibonacci series===   1,1,2,3,5,8,13....  arthat koi bhi term apne se pehle 2 term ka yoog hai.

int n;
printf("Enter a no. ");
scanf("%d",&n);
int a=1,b=1;
int sum=1;
 if(n==1)
printf("1");
if(n==2)
printf("1+1");
if(n!=1 && n!=2)
printf("1+1");
for(int i=3; i<=n; i++){   
    sum=a+b;
    a=b;
    b=sum;
    printf("+%d",sum);
}

    return 0;
}