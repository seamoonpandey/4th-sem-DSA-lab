#include<stdio.h>

void swap(int *a, int *b)
{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}

int partition(int arr[], int low, int high)
{
	int pivot = arr[high];
	int i = low - 1;

	for (int j = low ; j < hight ; j++)
	{
		if (arr[j] <= pivot){
			i++;
			swap(&arr[i], &arr[j]);
		}

	}
	swap(&arr[i+1], &arr[j]);
	return i+1;
}


void quickSort(int arr[], int low , int high)
{
		if (low< high)
		{
			int pi = partition(arr, low, high);

			quickSort(arr, low, pi -1);
			quickSort(arr, pi+1, high);
		}
}


void print(int arr[])
{
	int size = sizeof(arr)/sizeof(int);
	for (int i = 0 ; i < size; i++)
		printf("%d", arr[i];

	printf("\n");
	
}


int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: \n");
    printArray(arr);

    quickSort(arr, 0, n - 1);

    printf("Sorted array: \n");
    printArray(arr);
    return 0;
}

