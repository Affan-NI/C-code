// sabse zada 1 kis row me hai aur kitne hai.
#include<stdio.h>
int main(){          
    int arr[3][4]={{1,0,0,1},{1,0,0,0},{1,1,1,1}};
    int max1=0;
    int row=0;
    for(int i=0; i<3; i++){
        int count=0;      
        for(int j=0; j<4; j++){
           if(arr[i][j]==1){
            count++;            
           }
        }
        if(max1<count){
            max1=count;
            row=i+1;
        }        
    }        
    printf("maximum no. of 1 in %drd row and is %d",row,max1);                       
    return 0;
}