
#include <stdio.h>
void selectionSort(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
	{
        int min_index = i;
        for (int j = i + 1; j < n; j++) 
		{
            if (arr[j] < arr[min_index]) 
			{
                min_index = j;
            }
        }
        
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
        
        for (int k = 0; k < n; k++) 
		{
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
}

int main() 
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
    selectionSort(arr, n);   
    return 0;
}
