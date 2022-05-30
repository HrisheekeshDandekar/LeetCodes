/*
// Given an array arr, replace every element in that array with the greatest
// element among the elements to its right, and replace the last element 
// with -1.
// After doing so, return the array.
*/

#include <stdio.h>
#include <stdlib.h>

int* replaceElements(int* arr, int arrSize, int* returnSize);

int main()
{
	int arr[] = { 17,18,5,4,6,1 };	
	int arrSize = sizeof(arr) / sizeof(arr[0]);
	int returnSize;
	int* ret_arr = replaceElements(arr, arrSize, &returnSize);
	for( int i = 0; i < returnSize; i++ )
	{
		printf("%d ,", ret_arr[i]);
	}
	free(ret_arr);
	printf("\n");
	return 0;
}

/*
 * Note: The returned array must be malloced, assume caller calls free().
 */


int* replaceElements(int* arr, int arrSize, int* returnSize)
{
	*returnSize = arrSize;
	int* ret_arr = (int*)malloc(*returnSize * sizeof(int));

	//Guard clause
	if( arrSize == 1 ) 
	{
		ret_arr[0] = -1;
		return ret_arr;
	}

	//int largest_ele = arr[0];
	//int largest_pos = 0;
	//int ret_i = 0;  
	//int solved_i = 0;  

	//for( int i = 0; i < arrSize - 1; i++ )
	//{
	//	if( arr[i] > largest_ele )
	//	{
	//		largest_ele = arr[i];
	//		int j;
	//		for( j = i; j > solved_i; j-- )
	//		{
	//			ret_arr[j] = largest_ele;
	//		}

	//		solved_i = i - 1;
	//		largest_ele = arr[i + 1];	
	//	}
	//}
	
	int largest = arr[1];
	int largest = arr[1];

	for( int i = 0; i < arrSize; i++ ) // Loop for filling the return array
	{
		for( ;; ) //Loop for searching and getting the largest element to the right
	}


	//Replace last element with -1
	ret_arr[arrSize - 1] = -1;
	
	return ret_arr;
}
