#include<stdio.h>
int main(){
    char c;int k=-1;
    while((c=getchar())!='!'){
     putchar(c+(k+=2));
     c=getchar();
 }
    return 0;
}
