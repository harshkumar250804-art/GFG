# [Rank The Permutations](https://www.geeksforgeeks.org/problems/rank-the-permutations2229/1)
## Medium
Given a string&nbsp;s&nbsp;consisting of&nbsp;distinct&nbsp;lowercase characters, determine its rank among all its permutations when those are arranged in lexicographically sorted order.
Note:&nbsp;The&nbsp;rank&nbsp;of a string is its position (starting from 1) in the sorted list of all its permutations.
Examples:
Input: s = "abc"
Output: 1
Explanation: All permutations of "abc" arranged in lexicographical order are: [abc, acb, bac, bca, cab, cba]. Since "abc" appears first in this list, its rank is 1.

Input: s = "cba"Output: 6Explanation: All permutations of "cba" arranged in lexicographical order are: [abc, acb, bac, bca, cab, cba]. Since "cba" appears at the 6th position in this list, its rank is 6.
Input: s = "string"Output: 598Explanation: If all permutations of "string" are arranged in lexicographical order, then "string" appears at the 598th position in the list. Therefore, its rank is 598.
Constraints:1 ≤ |s| ≤ 18&nbsp;|s| denotes the length of the string s.