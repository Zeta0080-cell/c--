#include <stdio.h>

#define MAX_SIZE 10 // 定义数组的最大大小

// 函数用于将新元素插入到已排序的数组中
void insertIntoSortedArray(int arr[], int size, int newElement) 
{
    int i;
    // 找到插入点
    for (i = size - 1; (i >= 0) && (newElement < arr[i]); i--) 
	{
        arr[i + 1] = arr[i]; // 将元素向后移动
    }
    // 插入新元素
    arr[i + 1] = newElement;
}

int main() 
{
    int arr[MAX_SIZE] = {1, 3, 5, 7, 9}; // 已排序的数组
    int size = 5; // 数组的当前大小
    int newElement = 6; // 要插入的新元素

    // 确保数组有空间插入新元素
    if (size < MAX_SIZE)
	{
        // 插入新元素
        insertIntoSortedArray(arr, size, newElement);
        size++; // 更新数组大小
    } 
	else 
	{
        printf("Array is full. Cannot insert new element.\n");
    }

    // 打印结果
    printf("Sorted array after insertion: ");
    for (int i = 0; i < size; i++)
	{
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
