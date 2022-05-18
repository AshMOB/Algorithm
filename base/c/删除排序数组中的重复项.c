#include <stdio.h>
// c没有lenth，只能用sizeof(nums)/ sizeof(nums[0])之类的比较便利的方式获得数组长度,sizeof获取指针时只能获得指针本身的大小

int removeDuplicates(int *nums, int numsSize)
{
    int count = 0;
    printf("%d" ,sizeof(nums));
    for (int right = 1; right < numsSize; right++)
    {
        if (nums[right] == nums[right - 1])
        {
            count++;
        }
        else
        {
            nums[right - count] = nums[right];
        }
    }
    // printf("%d  %d", count, sizeof(nums) / sizeof(nums[0]));
    return numsSize - count;
}
int main()
{
    int a[] = {1, 1, 2};
    int s = sizeof(a) / sizeof(a[0]);
    int b = removeDuplicates(a, sizeof(a) / sizeof(a[0]));
    return 0;
}