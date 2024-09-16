// multiplication of two matrix.
#include<stdio.h>
int main(){
    // 1st matrix
    int m;
    printf("Enter no of rows of 1st matrix =");
    scanf("%d",&m);
    int n;
    printf("Enter no of columns of 1st matrix =");
    scanf("%d",&n);
    printf("ENter 1st matrix\n");        
    int a[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }        
    }
    // 2nd matrix
    int p;
    printf("Enter no of rows of 2nd matrix =");
    scanf("%d",&p);
    int q;
    printf("Enter no of columns of 2nd matrix =");
    scanf("%d",&q);
    printf("Enter 2nd matrix\n");
    int b[p][q];
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            scanf("%d",&b[i][j]);
        }        
    }
    printf("\n");
    // check
    if(n!=p){
        printf("Matrices cannot be multiplied ");
    }
    else{ 
    // multiplying          
    int res[m][q];        
    for(int i=0; i<m; i++){
        for(int j=0; j<q; j++){
            // i row of a[][] and j column of b[][]
            //res[i][j]= (a[i][0],a[i][1],a[i][2],...)*(b[0][j],b[1][j],b[2][j],...)
            res[i][j]=0;
            for(int k=0; k<n; k++){
               res[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    // print
    printf("The resultant matrix is \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<q; j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    }   
    return 0;
}