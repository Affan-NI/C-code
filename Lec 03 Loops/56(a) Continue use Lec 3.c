#include<stdio.h>
int main()
{
//Ques : WAP to print odd numbers from 1 to 100 .   
// using continue;
    for(int i=1; i<=100; i++){
        if(i%2==0){
        continue;// it means loop ke isse aage ka part skip kar do.  
        }
    printf("%d\n",i);
    }
    


    return 0;
}