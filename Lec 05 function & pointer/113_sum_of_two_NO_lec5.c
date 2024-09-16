#include<stdio.h>
int add(int x, int y){
    return x+y;
}
int main(){
    int n;
    printf("Enter a no. ");
    scanf("%D",&n);
     int m;
    printf("Enter 2nd no. ");
    scanf("%d",&m);
    int sum=add(n,m);
    printf("%d",sum);
    
    return 0;
}