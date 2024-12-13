//课本练习2—17 生成3的乘方表 
#include<stdio.h>
#include<math.h>
int main()
{
    int n = 0;//非负整数n
    scanf("%d", &n);//接收非负整数n
    for (int i = 0; i <= n; i++)//输出3的0~n次方的值
    {
        printf("pow(3,%d) = %.lf\n", i, pow(3, i));//链式访问打印结果
    }
    return 0;
}
