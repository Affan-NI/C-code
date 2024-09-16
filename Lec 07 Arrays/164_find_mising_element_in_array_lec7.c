// Given an array containing element from 1 to n excpt one element in this rang is missing .find missing element.
#include<stdio.h>
int main(){
    int n;
    printf("Enter n= ");
    scanf("%d",&n);
    int m=n-1;
    printf("no of element in array = %d",m);
    
    int arr[m];
    int sum=0;
    int sum2=0;
    for(int i=0; i<=m-1; i++) scanf("%d",&arr[i]); // hum yha 1 se n tak hi value leni hai aur kisi ko reapet nhi karna hai.
    for(int i=0; i<=m-1; i++) printf("%d,",arr[i]);
    for(int i=0; i<=m-1; i++) sum=sum+arr[i];
    sum2=n*(n+1)/2;
    int mis=sum2-sum;
    printf("\nmissing element is %d",mis);


    return 0;
}