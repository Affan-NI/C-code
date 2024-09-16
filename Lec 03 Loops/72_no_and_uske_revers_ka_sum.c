
#include<stdio.h>
int main(){
    int n;
    printf("Enter a no ");
    scanf("%d",&n);
    int x=n;
    int r=0;
    while(n>0){
        r=r*10;
        r=r+(n%10);
        n=n/10;
    }
    printf("the revers no is %d",r);
    printf("\nsum of original & revers no. is %d",x+r);
}