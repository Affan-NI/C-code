#include<stdio.h>
// chess ki traha ek grid hai row->n, column->m hai. (1,1) se (n,m) per jana hai. total  ways find karo.
// condition-> down, right chal sakte hai only.
int maze(int n, int m){
    int rightways=0;
    int downways=0;
    if(n==1 && m==1) return 1;
    if(n==1){     // only rightways call
        rightways+=maze(n,m-1);
    }
    if(m==1){     //only downward call
        downways+=maze(n-1,m);
    }
    if(n>1 && m>1){
        rightways+=maze(n,m-1);
        downways+=maze(n-1,m);
    }
    int totalways=rightways+downways;
    return totalways;
}
int main(){
    int n;
    printf("Enter no. of row: ");
    scanf("%d",&n);
    int m;
    printf("Enter no. of column: ");
    scanf("%d",&m);
    int noOfways=maze(n,m);
    printf("%d",noOfways);
    return 0;
}