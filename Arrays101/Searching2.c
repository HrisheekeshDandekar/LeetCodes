/*Given an array of integers arr, return true if and only if it is a valid mountain array.

Recall that arr is a mountain array if and only if:

arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
*/
#include <stdio.h>
#include <stdbool.h>

bool validMountainArray(int* arr, int arrSize);

int main()
{
	//int arr[] = {2,1};
	//int arr[] = {3,5,5};
	int arr[] = {0,3,2,1};
	//int arr[] = {0,1,2,3,4,5,6,7,8,9};
	//int arr[] = {2,0,2};
	int arrSize = sizeof(arr) / sizeof(arr[0]);
	bool is_MountainArr = validMountainArray(arr, arrSize);
	printf( is_MountainArr ? "true\n" : "false\n");
	return 0;
}

bool validMountainArray(int* arr, int arrSize)
{
	if( arrSize < 3 ) { return false; }
	int current = arr[0];
	int i = 1;

	for(; i < arrSize; i++ )
	{
		if( current == arr[i] ){ return false; }
		if( current > arr[i] )
		{
			current = arr[i];
			break;
		}
		current = arr[i];
	} i++;

	if( i == arrSize + 1 || i == 2 ) { return false; }

	for( ; i < arrSize; i++ )
	{
		if( current <= arr[i] ) { return false; }
		current = arr[i];
	}												
	return true;
}

