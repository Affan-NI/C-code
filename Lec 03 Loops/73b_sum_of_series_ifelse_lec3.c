#include<stdio.h>
int main(){
// 1-2+3-4+5-6+.....n term
//2nd method
    int n;
    printf("Enetr no. of term ");
    scanf("%d",&n);
    int sum=0;
    if(n%2==0) // (1-2)+(3-4)+(5-6)+...
        sum=sum+(-n/2);
    
    else 
        sum=sum-n/2+n;
    printf("sum of series is %d",sum);

}