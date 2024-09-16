#include<stdio.h>
int main()
{
//Ques: Print all even numbers from 1 to 100

    for(int i=1; i<=100; i++){
        if(i%2==0)
        printf("%d\n",i);
    }
  
// 2nd Method: 
   /* for(int i=2; i<=100; i=i+2 ){
    
    printf("%d\n",i);
    }*/
    
return 0;
}