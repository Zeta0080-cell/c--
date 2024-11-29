#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define MAX_LEN 100
int isValidNumber(const char *str, int base) 
{
    for (int i = 0; str[i] != '\0'; i++) 
	{
        char c = str[i];
        if (isdigit(c))
		 { 
            if (c - '0' >= base) return 0;
        } 
		else if (isalpha(c))
		{ 
            if (toupper(c) - 'A' + 10 >= base) return 0;
        } 
		else 
		{ 
            return 0;
        }
    }
    return 1;
}

int toDecimal(const char *str, int base)
 {
    int result = 0;
    for (int i = 0; str[i] != '\0'; i++) 
	{
        char c = str[i];
        int value = isdigit(c) ? c - '0' : toupper(c) - 'A' + 10;
        result = result * base + value;
    }
    return result;
}

int strToDecimal(const char *str)
 {
    int result = 0;
    for (int i = 0; str[i] != '\0'; i++) 
	{
        result = result * 10 + (str[i] - '0');
    }
    return result;
}
void fromDecimal(int num, int base, char *result) 
{
    char temp[MAX_LEN];
    int index = 0;

    if (num == 0) 
	{
        strcpy(result, "0");
        return;
    }

    while (num > 0) 
	{
        int remainder = num % base;
        temp[index++] = (remainder < 10) ? remainder + '0' : remainder - 10 + 'A';
        num /= base;
    }
    for (int i = 0; i < index; i++)
	 {
        result[i] = temp[index - i - 1];
    }
    result[index] = '\0';
}

int main() 
{
    int base;
    char number[MAX_LEN];
    scanf("%d %s", &base, number);
    if (base != 10 && base != 19)
	 {
        printf("DATA ERROR!\n");
        return 0;
    }
    if (!isValidNumber(number, base)) 
	{
        printf("DATA ERROR!\n");
        return 0;
    }
    if (base == 10) 
	{ 
        int decimal = strToDecimal(number); 
        char result[MAX_LEN];
        fromDecimal(decimal, 19, result);
        printf("%s\n", result);
    } 
	else
	 { 
        int decimal = toDecimal(number, 19);
        printf("%d\n", decimal);
    }

    return 0;
}

