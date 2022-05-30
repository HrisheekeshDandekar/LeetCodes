#include <stdio.h>

int removeDuplicates(int* nums, int numsSize);

int main(int argc, char** argv)
{
	int nums[] = {0,0,1,1,1,2,2,3,3,4};
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int k = removeDuplicates(nums, numsSize);

	//Testing
	for( int i = 0; i < k; i++ )
	{
		printf("%d ,", nums[i]);
	}

	return 0;
}

int removeDuplicates(int* nums, int numsSize)
{
	//int current = nums[1];
	int unique_i = 0; // Position of array from the begining with unique elements

	for( int i = 1; i < numsSize; i++ )
	{
		//current = nums[i];
		if( nums[unique_i] != nums[i] )//If unique found itterate the unique pointer
		{
			nums[++unique_i] = nums[i]; //If same element found, replace it with the next unique element
		}
		
	}
	return unique_i + 1; // Array indexing starts with 0, hence total elements is +1
}

