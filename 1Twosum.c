
//1. Two Sum - my gg

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int *returnval = malloc((*returnSize)*sizeof(int));
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if(nums[i]+nums[j]==target){
                returnval[0]=i;
                returnval[1]=j;
                break;
            }
        }
    }
    return returnval;
}
