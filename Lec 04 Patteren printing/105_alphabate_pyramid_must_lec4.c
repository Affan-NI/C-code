#include<stdio.h>
int main(){
    int n;
    printf("Enter a no.  ");
    scanf("%d",&n);
    int nsp=n-1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=nsp; j++){      // space print ke lia .
            printf(" ");
        }
        nsp--;
        for(int k=1; k<=i; k++){    
        char ch1=(char)(k+64);           // number tringle ke lia.
            printf("%c",ch1);
        }
        int a=i-1;
        for(int l=1; l<=i-1; l++){  
            char ch2=(char)(a+64);    // extra chez 
            printf("%c",ch2);
            a--;
        }
        printf("\n");
    }
    return 0;
}