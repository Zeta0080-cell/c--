//2012蓝桥杯国赛-国庆星期几(zeller公式)
//zeller公式用于计算给定日期是星期几 
#include <bits/stdc++.h>//万能头文件 
using namespace std;
int zeller(int year,int month,int day)//输入给定的日期 
{
    if (month < 3) 
	{
        month += 12;
        year -= 1;
    }
    int h = (day + (13 * (month + 1)) / 5 + year + year / 4 - year / 100 + year / 400) % 7;
    return (h + 5) % 7 + 1; // 转换为1-7表示星期一到星期日
}

int main()
{
    int count = 0;

    for (int year = 1949; year <= 2012; ++year) 
	{
        if (zeller(year, 10, 1) == 7) 
		{ //7代表星期日 
            ++count;
        }
    }
    std::cout << "从1949年到2012年，国庆节是星期日的次数: " << count << std::endl;
    return 0;
}
