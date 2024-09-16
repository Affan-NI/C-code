#include<stdio.h>

int main()
{
// take positive number input tell is it divisible by 3 and 5.
    int n;
    printf("Ente a number");
    scanf("%d",&n);
if(n%5==0){

    if(n%3==0){
    printf("this no. is divisible by 3 and 5");
    }
    else{
    printf(" this no.is not divisible by 3&5 ");
    }
}
else{
printf(" this no.is not divisible by 3&5 ");
}
    return 0;
}