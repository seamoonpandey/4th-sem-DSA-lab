#include<stdio.h>

// declare the functions

void insertionSort(int array[],int n);
void selectionSort(int array[],int n);
void bubbleSort(int array[], int n);

// a function for swapping two memory contents, yeah exactly memory contents
// here we swap it the better way ensuring there are no memory leaks or some other potentials issues
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// a function to print the array to keep the track like pro
void print(int array[], int n, char when)
{
	if(when == 'A')
		printf("Array after sorting");
	else
		printf("Array before sorting");
	puts();

	// lets traverse the array and print it through
	for(int i = 0 ; i < n ; i++)
		printf("%d\t", array[i]);

	// line changing line
	printf("\n");
	return;
}


// a function to copy the array to avoid the tedious work like boss
void copy(int from[],int  dest[],int  l)
{
	for(int i = 0; i<l; i++){
		dest[i] = from[i];
	}
	return;
}
int main()
{
	// take the array input section or say something like that
	
	int n;
	printf("Enter the length of array");
	scanf("%d", &n);
	
	// now the part is to take the whole array into account
	
	int array[n];
	printf("Enter the array with separated whitespaces");
	for(int i = 0 ; i < n ; i++)
		scanf("%d",&array[i]);
	
	// now lets do the all sorting and stuff
	
	/*
	 
	 * The list of sorting methods we are supposed to do are:-
	 
	 * 1. Insertion sort
	 * 2. Selection sort
	 * 3. Bubble sort
	
       	*/
	
	// lets calculate the size of the input array like a boss in O(1) time complexity
	
	int length = sizeof(array)/sizeof(int);
	// printf("%d",length);
	
	//lets sort but at first I think we shall make a copy of our original array.
	
	int bubbleArray[n];
	
	copy(array,bubbleArray, length);
	
	print(bubbleArray, length, 'B');

	bubbleSort(bubbleArray, length);

	print(bubbleArray, length,'A');
	return 0;
}

// function definition


// Bubble Sort


void bubbleSort(int array[], int n)
{
	// outer loop for the two pointer
	for(int i = 0 ; i < n - 1 ; i++)
	{
		int swapped = 0;

		for(int j = 0; j < n - 1 - i ; j++)
		{
			if(array[j] > array[j + 1])
			{
				swap(&array[j], &array[j+1]);
				swapped = 1;
			}
		}
		
		// if any one value isn't swapped till the end then the list shall be probably sorted right??
		if(!swapped) break;
	}
}
