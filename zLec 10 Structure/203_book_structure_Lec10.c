// creat structre type 'book'with name,price and no. of pages as its attributes.
#include<stdio.h>
#include<string.h>
int main(){
    struct BOok {   // book ko hum small ya capital kisi bhi letter me likh sakte hai.
        char name[50];      //Imp
        float price;
        int no0fpages;
    }a,b,c;
    a.no0fpages=100;
    a.price=412.5;
    strcpy(a.name, "Secret Seven"); // IMp

    b.no0fpages=200;
    b.price=600;
    strcpy(b.name, "Famous Five");

   

    printf("%d\n",b.no0fpages);
    printf("%f\n",b.price);
    printf("%s\n",b.name);

    return 0;
}