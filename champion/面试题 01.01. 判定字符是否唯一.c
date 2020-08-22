/*
 * @lc app=leetcode.cn id=3 lang=c
 *
 * 面试题 01.01. 判定字符是否唯一
 *
 * https://leetcode-cn.com/problems/is-unique-lcci/
 *
 * algorithms
 * Medium (34.31%)
 * Likes:    3596
 * Dislikes: 0
 * Total Accepted:    469.6K
 * Total Submissions: 1.4M
 * Testcase Example:  '"abcabcbb"'
 *
 * 实现一个算法，确定一个字符串 s 的所有字符是否全都不同。
 *
 * 示例 1：
 *
 * 输入: s = "leetcode"
 * 输出: false
 * 示例 2：
 *
 * 输入: s = "abc"
 * 输出: true
 * 限制：
 *
 * 0 <= len(s) <= 100
 * 如果你不使用额外的数据结构，会很加分。
 *
 *
 */

// @lc code=start

#include <string.h>

bool isUnique( char* astr ) {
    char* pch = astr;
    while ( *pch != '\0' ) {
        if ( *( pch + 1 ) == '\0' ) {
            return true;
        }
        char temp[ 2 ] = { 0 };
        temp[ 0 ]      = *pch;
        char* pfind    = strstr( pch + 1, temp );
        if ( pfind ) {
            return false;
        }
        pch++;
    }
    return true;
}

// @lc code=end
