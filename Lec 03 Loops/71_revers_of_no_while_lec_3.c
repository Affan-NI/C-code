// WAP to print revers of a no.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a no ");
    scanf("%d",&n);
    printf("revers no. is ");
    while(n>0){
        int lastdigit=n%10;
        printf("%d",lastdigit);
        n=n/10;
    }
}
// 
//2nd method=
// #include<stdio.h>
// int main(){
    // int n;
    // printf("Enter a no ");
    // scanf("%d",&n);
    // int r=0;
    // while(n>0){
        // r=r*10;
        // r=r+(n%10);
        // n=n/10;
    // }
    // printf("the revers no is %d",r);
// }
// 
// 