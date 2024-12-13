#include<stdio.h>
int main()
{
    int lower = 0;//最低华氏温度
    int upper = 0;//最高华氏温度
    double C = 0;//摄氏温度
    scanf("%d %d", &lower, &upper);//接收最低，最高华氏温度
    if (lower <= upper)//判断输入范围是否合法，输入范围合法
    {
        printf("fahr celsius\n");//按照输出格式打印
        for (int F = lower; F <= upper; F += 2)//计算取值范围中规则要求的所有华氏温度
        {
            C = 5 * (F - 32) / 9.0;//转换成对应的摄氏温度
            printf("%d%6.1lf\n", F, C);//按照输出格式打印结果
        }
    }
    else//输入范围不合法
    {
        printf("Invalid.");//打印结果
    }
    return 0;
}
