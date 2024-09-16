#include<stdio.h>

int main()
{
//Ques: Display this AP - 100,97,94,..upto all terms which are positive.
     int a=100;
     for(int i=1; a>0; i++){
        printf("%d\n",a);
        a=a-3;
    }
    


    return 0;
}