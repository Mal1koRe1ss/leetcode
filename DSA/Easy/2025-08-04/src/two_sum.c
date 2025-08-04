#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize);

int main(int argc, char *argv[]) {
	int nums[] = {1,2,3,4,5};
	int returnSize;

	int target = argv[1] ? atoi(argv[1]) : 0;
	
	
	twoSum(nums, sizeof(nums) / sizeof(nums[0]), target, &returnSize);

	return 1;	
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
	for (int i = 0; i < numsSize; i++) {
		for (int j = i;j < numsSize; j++) {
			if (nums[i] + nums[j] == target) {
				printf("[%d, %d]\n", i, j);
				break;
			} 
		}
	}
	return NULL;
}
