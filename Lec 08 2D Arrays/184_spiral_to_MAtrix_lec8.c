// enter order of squar matrix n. matrix fill karo with element from 1 to n squar in spiral order.
#include<stdio.h>
int main(){   
    int n;
    printf("Enter order of squar matrix =");
    scanf("%d",&n);            
    int a[n][n];    
    printf("\n");
    // spiral print 
    int minr=0;
    int maxc=n-1;
    int maxr=n-1;
    int minc=0;
    int fil=0;
    int tne=n*n;
    int count=0;
    while(count<tne){
        // print minimum row
        for(int j=minc; j<=maxc && count<tne; j++){
             fil=fil+1;
            a[minr][j]=fil;
            count++;
        }
        minr++;
        // print maximum column
        for(int i=minr; i<=maxr && count<tne; i++){
            fil=fil+1;
           a[i][maxc]=fil;
            count++;
        }
        maxc--;
        // print maximum row
        for(int j=maxc; j>=minc && count<tne; j--){
            fil=fil+1;
            a[maxr][j]=fil;
            count++;
        }
        maxr--;
        // print minimum column
        for(int i=maxr; i>=minr && count<tne; i--){
            fil=fil+1;
            a[i][minc]=fil;
            count++;
        }
        minc++;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}