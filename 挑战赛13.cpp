#include<stdio.h>
int f(int x){
    if(x<3) return x+1;
    else    return f(x-1)+f(x-2)+f(x-3);
}
