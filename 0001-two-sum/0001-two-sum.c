/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int i = 0; i < numsSize; i++) {
        int prev = nums[i];
        for (int j = i + 1; j < numsSize; j++) {
            int cur = nums[j];
            if (target - prev == cur) {
                int* result = (int*)malloc(sizeof(int) * 2);
                *returnSize = 2;
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    *returnSize = 0; // 결과가 없을 경우
    return NULL;
}
