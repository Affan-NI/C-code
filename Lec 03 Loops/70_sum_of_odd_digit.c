#include<stdio.h>
int main(){
//WAP to print sum of all the odd digits of a given number.
int n;
printf("Enter a no. ");
scanf("%d",&n);
int i;
int sum=0;
for(i=1; n>0; i++){
    int lastdigit=n%10;
    n=n/10;
    if(lastdigit%2!=0)
        sum=sum+lastdigit;
}   
printf("sum of odd digits=%d",sum);
    
    
return 0;
}