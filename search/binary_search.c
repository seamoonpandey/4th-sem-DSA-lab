#include<stdio.h>

// this program is for the binary search algorithm
// namely divide and conquer


int search(int arr[],int size, int target)
{
	int right = 0;
	int left = size-1;

	while(left <= right)
	{
		int mid = left + (right-left)/2;
		if (arr[mid] == target) return mid;
		
		if (arr[mid] < target)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return -1;
}


int main()
{
	int arr[] = {1,2,3,4,5};
	int size = sizeof(arr)/sizeof(int);
	int index = search(arr, size, 3);	
	printf("%d",index);
	return 0;
}
