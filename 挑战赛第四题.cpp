#include<stdio.h>
int main( ){
    int i;
    for(i=0;i<10;i++){
     if(i%5)     { printf("5");continue;}
        else if(i%3){ printf("3");continue;}
        else if(i%2){ printf("2");continue;}
        printf("0");
    }
    return 0;
}
