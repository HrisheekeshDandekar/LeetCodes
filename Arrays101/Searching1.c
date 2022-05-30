/*
 *Given an array arr of integers, check if there exists two integers N and M such that N is the double of M ( i.e. N = 2 * M).

More formally check if there exists two indices i and j such that :

i != j
0 <= i, j < arr.length
arr[i] == 2 * arr[j]
*/

#include <stdio.h>
#include <stdbool.h>

bool checkIfExist(int* arr, int arrSize);

int main()
{
	//int arr[] = { 7,1,14,11 }; //t
	//int arr[] = {10,2,5,3}; //t
	int arr[] = {3,1,7,11}; //f
	int arrSize = sizeof(arr) / sizeof(arr[0]);

	bool is_exist = checkIfExist(arr, arrSize);
	
	printf(is_exist ? "true\n" : "false\n");

	return 0;
}


bool checkIfExist(int* arr, int arrSize)
{
	for( int i = 0 ; i < arrSize; i++ )
	{
		if( !arr[i] ) { continue; }

		for( int j = i + 1; j < arrSize; j++ )
		{
			//If Typecasts not present, celing division is performed
			if( ((float)arr[i] == (float)((float)arr[j] * 2)) || ((float)arr[i] == (float)((float)arr[j] / 2)) )
			{
				return true;
			}
		}
	}
	return false;
}
