//���ֲ���-1 
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
	//û���ҵ�Ŀ��ֵ 
	return -1;
}

int main() {
    int nums[] = {1, 3, 5, 7, 9, 11, 13, 15}; // ʾ����������
    int size = sizeof(nums) / sizeof(nums[0]); // ���������С
    int target;
    
    printf("��������: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    printf("������Ҫ���ҵ�Ŀ��ֵ: ");
    scanf("%d", &target);

    int result = search(nums, size, target);

    if (result != -1) {
        printf("Ŀ��ֵ %d �������е�������: %d\n", target, result);
    } else {
        printf("Ŀ��ֵ %d ����������\n", target);
    }

    return 0;
}
