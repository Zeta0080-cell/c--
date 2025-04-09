//二分查找-1 
#include<bits/stdc++.h>
using namespace std;

int search(int nums[],int size,int target)
{
	int left=0;
	int right=size-1;
	while(left<=right)
	{
		int middle=left+((right-left)/2);
		if(nums[middle]>target)
		{
			right=middle-1;
		}
		else if(nums[middle]<target)
		{
			left=middle+1;
		}
		else
		{
			return middle;
		}
	}
	//没有找到目标值 
	return -1;
}

int main() {
    int nums[] = {1, 3, 5, 7, 9, 11, 13, 15}; // 示例有序数组
    int size = sizeof(nums) / sizeof(nums[0]); // 计算数组大小
    int target;
    
    printf("数组内容: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    printf("请输入要查找的目标值: ");
    scanf("%d", &target);

    int result = search(nums, size, target);

    if (result != -1) {
        printf("目标值 %d 在数组中的索引是: %d\n", target, result);
    } else {
        printf("目标值 %d 不在数组中\n", target);
    }

    return 0;
}
