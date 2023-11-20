#include <stdio.h>
#include <stdlib.h>
int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int *indices = malloc(2 * sizeof(int));
    *returnSize = 2;
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                indices[0] = i;
                indices[1] = j;
                return indices;
            }
        }
    }
    return indices;
}
int main()
{
    int nums[] = {2, 7, 11, 15};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int target = 18;
    int returnSize;
    int *indices = twoSum(nums, numsSize, target, &returnSize);
    for (int i = 0; i < returnSize; i++)
    {
        printf("%d\n", indices[i]);
    }
    return 0;
}