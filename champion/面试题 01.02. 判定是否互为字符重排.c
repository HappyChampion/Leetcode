/*
 * @lc app=leetcode.cn id=3 lang=c
 *
 * 面试题 01.02. 判定是否互为字符重排
 *
 * https://leetcode-cn.com/problems/check-permutation-lcci/
 *
 * algorithms
 * Medium (34.31%)
 * Likes:    3596
 * Dislikes: 0
 * Total Accepted:    469.6K
 * Total Submissions: 1.4M
 * Testcase Example:  '"abcabcbb"'
 *
 * 给定两个字符串 s1 和 s2，请编写一个程序，确定其中一个字符串的字符重新排列后，能否变成另一个字符串。
 *
 * 示例 1：
 *
 * 输入: s1 = "abc", s2 = "bca"
 * 输出: true
 * 示例 2：
 *
 * 输入: s1 = "abc", s2 = "bad"
 * 输出: false
 * 说明：
 *
 * 0 <= len(s1) <= 100
 * 0 <= len(s2) <= 100
 *
 *
 */

// @lc code=start

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sort_function( const void* a, const void* b ) {
    char chA = *( char* )a;
    char chB = *( char* )b;
    return ( chA - chB );
}

bool CheckPermutation( char* s1, char* s2 ) {
    if ( strlen( s1 ) != strlen( s2 ) ) {
        return false;
    }
    qsort( ( void* )s1, strlen( s1 ), sizeof( char ), sort_function );
    qsort( ( void* )s2, strlen( s2 ), sizeof( char ), sort_function );
    return strcmp( s1, s2 ) == 0;
}

// @lc code=end
