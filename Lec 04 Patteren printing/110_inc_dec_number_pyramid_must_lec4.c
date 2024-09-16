#include<stdio.h>
int main(){
    int n;
    printf("Enter a no. ");
    scanf("%d",&n);
    int no=n;
    int nsp=1;
    int x=1;
    for(int i=1; i<=2*n+1; i++){
         printf("%d",x);
        if(i<=n)  x++;
        else    x--;
       
    }
    printf("\n");
    for(int i=1; i<=n; i++){
       int a=1;
        for(int j=1; j<=no; j++){  
            printf("%d",a);
            a++;}
        for(int k=1; k<=nsp; k++){
            printf(" ");}
        a--;
        for(int j=1; j<=no; j++){
            
            printf("%d",a);
            a--;
        }
        no--;
        nsp+=2;
        printf("\n");
        
    }
    return 0;
}