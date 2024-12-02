//codeforces—choose place
#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> classroom(6);  // 用vector存储每行课桌信息

    // 读取输入数据
    for (int i = 0; i < 6; i++) {
        std::cin >> classroom[i];
    }

    // 定义便利度数组，越靠近黑板的地方越方便
    int convenience[6][3] = {
        {3, 2, 1}, // 第一行
        {3, 2, 1}, // 第二行
        {4, 3, 2}, // 第三行
        {4, 3, 2}, // 第四行
        {5, 4, 3}, // 第五行
        {5, 4, 3}  // 第六行
    };

    int maxConvenience = -1;  // 最方便的位置的便利度
    int bestRow = -1, bestCol = -1;  // 最优位置的行列索引

    // 遍历每个位置，寻找最优空位
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {  // 每行有三个位置
            if (classroom[i][j * 3] == '.' && convenience[i][j] > maxConvenience) {
                // 找到一个空位，并且这个位置更方便
                maxConvenience = convenience[i][j];
                bestRow = i;
                bestCol = j;
            }
        }
    }

    // 将最优位置标记为'P'
    classroom[bestRow][bestCol * 3] = 'P';

    // 输出修改后的课桌布局
    for (int i = 0; i < 6; i++) {
        std::cout << classroom[i] << std::endl;
    }

    return 0;
}

