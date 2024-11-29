#include<stdio.h>
#include<string.h>
int main(){
    char jts[50][50],p[50]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i;
 for(i=0;i<26;i++){
     strcpy(jts[i],p+i);
     if((i%2)*(i%5)*(i%7)==0) continue;
     puts(jts[i]);
 }
    return 0;
}
