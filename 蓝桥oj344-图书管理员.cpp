//蓝桥oj344-图书管理员
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
using namespace std;

const int N = 1000;

int main()
{
    int n, q; // n代表图书的数量，q代表读者的数量
    int book_num[N]; // 这个数组代表图书编码数组
    int reader_l[N], reader_num[N]; // 读者的需求码长度和需求码数组

    // 输入图书数量和读者数量
    scanf("%d %d", &n, &q);

    // 输入图书编码
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &book_num[i]);
    }

    // 输入读者的需求码长度和需求码
    for (int i = 0; i < q; i++) 
	{
        scanf("%d %d", &reader_l[i], &reader_num[i]);
    }

    // 对图书编码进行排序，方便后续查找最小的匹配编码
    sort(book_num, book_num + n);

    // 处理每个读者的查询
    for (int i = 0; i < q; i++) 
	{
        int length = reader_l[i]; // 需求码的长度
        int code = reader_num[i]; // 需求码
        int min_book = -1; // 初始化最小图书编码为-1（表示未找到）

        // 遍历所有图书编码
        for (int j = 0; j < n; j++) 
		{
            // 将图书编码转换为字符串
            string book_str = to_string(book_num[j]);
            // 将需求码转换为字符串
            string code_str = to_string(code);

            // 如果图书编码的长度小于需求码的长度，直接跳过
            if (book_str.length() < length) continue;

            // 截取图书编码的最后几位
            string suffix = book_str.substr(book_str.length() - length);

            // 如果截取的部分与需求码匹配
            if (suffix == code_str) 
			{
                // 如果当前图书编码比之前记录的最小编码更小，更新最小编码
                if (min_book == -1 || book_num[j] < min_book) 
				{
                    min_book = book_num[j];
                }
            }
        }

        // 输出结果
        printf("%d\n", min_book);
    }

    return 0;
} 
