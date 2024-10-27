//找零钱问题最少问题—贪心算法 
#include <stdio.h>
int main() 
{
    int money; 
    scanf("%d", &money); 

    int count = 0; 
    int five = 0;  
    int two = 0;   
    int one = 0; 
	  
    five = money / 5;
    count += five;
    money %= 5; 
    
    two = money / 2;
    count += two;
    money %= 2; 
    
    one = money;
    count += one;
    printf("%d %d %d %d\n", count, five, two, one);
    return 0;
}
