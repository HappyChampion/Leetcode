/*
 * @lc app=leetcode.cn id=1 lang=c
 *
 * [1] 两数之和
 *
 * https://leetcode-cn.com/problems/two-sum/description/
 *
 * algorithms
 * Easy (48.29%)
 * Likes:    8159
 * Dislikes: 0
 * Total Accepted:    1M
 * Total Submissions: 2.1M
 * Testcase Example:  '[2,7,11,15]\n9'
 *
 * 给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。
 * 
 * 你可以假设每种输入只会对应一个答案。但是，数组中同一个元素不能使用两遍。
 * 
 * 
 * 
 * 示例:
 * 
 * 给定 nums = [2, 7, 11, 15], target = 9
 * 
 * 因为 nums[0] + nums[1] = 2 + 7 = 9
 * 所以返回 [0, 1]
 * 
 * 
 */

// @lc code=start
#include<stdio.h>
#include<stdlib.h>
int find_num(int* nums, int numsSize, int beginIdx, int targetNum) 
{
    for ( int i = beginIdx; i < numsSize; i++ ) {
        if ( targetNum == nums[i]) {
            return i;
        }
    }
    return -1;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum( int* nums, int numsSize, int target, int* returnSize ) {

    int first  = -1;
    int second = -1;
    for ( int i = 0; i < numsSize; i++ ) {
        int temp = find_num( nums, numsSize, i + 1, target - nums[ i ] );
        if ( temp != -1 ) {
            first  = i;
            second = temp;
            break;
        }
    }
    if ( first == -1 ) {
        *returnSize = 0;
        return NULL;
    }
    *returnSize   = 2;
    int* outArray = ( int* )malloc( sizeof( int ) * ( *returnSize ) );
    if ( outArray == NULL ) {
        *returnSize = 0;
        return NULL;
    }
    outArray[ 0 ] = first;
    outArray[ 1 ] = second;
    return outArray;

// @lc code=end

