# include<stdio.h>
int main(){
    int a[2][2]={{1,2},{3,4}};  // 1st matrix
    int b[2][2]={{1,2},{3,4}};  // 2nd matrix
    int res[2][2];                  // resultant matrix
    // multiplication
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            // i row of a[][] and j column of b[][]
            //res[i][j]= (a[i][0],a[i][1],a[i][2],...)*(b[0][j],b[1][j],b[2][j],...)
            res[i][j]=0;
            for(int k=0; k<2; k++){
                res[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}