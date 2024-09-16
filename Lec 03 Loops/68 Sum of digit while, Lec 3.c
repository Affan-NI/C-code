#include<stdio.h>
int main()
{
// WAP to print sum of digit of a given number.   
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int sum=0;
    int ld=0;
    while(n!=0){
        ld=n%10;// ld= last digit 
        sum=sum+ld;    // jab kisi no.ko 10 se divide karte hai to Remender last digit hota hai.  
        n=n/10;
    }
    printf("sum of digit is %d",sum);

return 0;
}