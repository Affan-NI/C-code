#include<stdio.h>
int main()
{
// print 19 ki table.

   /* for(int i=1; i<=190; i++){
        if(i%19==0)
        printf("%d\n",i);
    }*/
  
// 2nd Method: 
   for(int i=19; i<=190; i=i+19 ){
    
    printf("%d\n",i);
    }
    
return 0;
}