#include<stdio.h>
int main(){
// fibonacci series===   1,1,2,3,5,8,13....  arthat koi bhi term apne se pehle 2 term ka yoog hai.
//print first n fibonaci no.
int n;
printf("Enter a no. ");
scanf("%d",&n);
int a=1,b=1;
int sum=1;
if(n==1)
printf("1st fibonacci no.is 1\n");
if(n==2)
printf("1st fibonacci no.is 1\n2nd fibonacci no. is 1\n");
if(n!=1 && n!=2)
printf("1st fibonacci no.is 1\n2nd fibonacci no. is 1\n");
for(int i=3; i<=n; i++){   
    sum=a+b;
    a=b;
    b=sum;
    printf("%dth fibonacci no. is %d\n",i,sum);
}
    return 0;
}