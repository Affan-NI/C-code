#include<stdio.h>
int main(){
    // isme n odd hi use hoga.
    int n;
    printf("Enter a no.  ");
    scanf("%d",&n);
    int nsp=n/2;        // nsp=no. of space
    int nst=1;          // nst=no. of star
    int ml=n/2+1;       // ml=middile line.
    for(int i=1; i<=n; i++){
       for(int j=1; j<=nsp; j++){
            printf(" ");
       }
       for(int k=1; k<=nst; k++){
        printf("*");
       }
       if(i<ml){
        nsp--;
        nst+=2;
       }
       else{
        nsp++;
        nst-=2;
       }
       printf("\n");
    }

    return 0;;
}