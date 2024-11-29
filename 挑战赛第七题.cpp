#include<stdio.h>
int main( ){
    int x=0531;
    do{
        printf("%d",x%10); 
    }while(x/=10);
}
