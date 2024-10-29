#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char input[11]; 				// 声明一个字符数组，用于存储输入的字符串，包括结束标志'#'
    char hexStr[11]; 				// 声明一个字符数组，用于存储过滤后的十六进制字符串
    int index = 0; 					// 用于记录hexStr数组的索引    								// 读取输入的字符串
    scanf("%10s", input); 			// 读取最多10个字符

   							 						// 遍历输入的字符串，过滤非十六进制字符
    for (int i = 0; input[i] != '#'; i++) 
	{
        if (isxdigit(input[i]))
		 { 									// 检查字符是否为十六进制数字
            hexStr[index++] = input[i]; 	// 如果是，添加到hexStr数组中
        }
    }
    hexStr[index] = '\0'; 					// 在字符串末尾添加结束符

    										// 输出过滤后的十六进制字符串
    printf("%s\n", hexStr);   										// 将十六进制字符串转换为十进制数并输出
    int decimal = 0;
    for (int i = 0; hexStr[i] != '\0'; i++) 
	{													// 将十六进制字符转换为对应的十进制值并累加
        if (hexStr[i] >= '0' && hexStr[i] <= '9') 
		{
            decimal = decimal * 16 + (hexStr[i] - '0');
        } 
		else if (hexStr[i] >= 'A' && hexStr[i] <= 'F') 
		{
            decimal = decimal * 16 + (hexStr[i] - 'A' + 10);
        } 
		else if (hexStr[i] >= 'a' && hexStr[i] <= 'f') 
		{
            decimal = decimal * 16 + (hexStr[i] - 'a' + 10);
        }
    }
    printf("%d\n", decimal);

    return 0;
}
