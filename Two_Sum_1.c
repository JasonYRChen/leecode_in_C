

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int *array = (int*)malloc(sizeof(int) * 2);
    for (int i=0; i<numsSize; i++)
        for (int j=i+1; j<numsSize; j++)
            if (target == *(nums+i) + *(nums+j)) {
                array[0] = i;
                array[1] = j; 
                break;
            }
    return array;
}

int main()
{
    int nums[] = {1, 4, 2, 6};
    int numsSize = 4;
    int target = 6;
    int returnSize = 2;
    int *result = twoSum(nums, numsSize, target, &returnSize);

    for (int i=0; i<2; i++)
        printf("%i\n", *(result+i));

    return 0;
}

