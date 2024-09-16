#include<stdio.h>
// chess ki traha ek grid hai row->n, column->m hai. (1,1) se (n,m) per jana hai. total  ways find karo.
// condition-> down, right chal sakte hai only.
int maze(int cr, int cc, int er, int ec){       // cr=current row, cc=current column, er=ending row, ec=ending column.
    int rightways=0;
    int downways=0;
    if(cr==er && cc==ec) return 1;
    if(cr==er){     // only rightways call
        rightways+=maze(cr,cc+1,er,ec);
    }
    if(cc==ec){     //only doenward call
        downways+=maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec){
        rightways+=maze(cr,cc+1,er,ec);
        downways+=maze(cr+1,cc,er,ec);
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
    int noOfways=maze(1,1,n,m);
    printf("%d",noOfways);
    return 0;
}