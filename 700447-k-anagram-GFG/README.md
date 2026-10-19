# [k-Anagram](https://www.geeksforgeeks.org/problems/check-if-two-strings-are-k-anagrams-or-not/1)
## Medium
Given two strings s1 and s2 consisting of lowercase English alphabets, and an integer value k, return true if two strings are k-anagrams of each other. Otherwise, return false.
Two strings are called k-anagrams&nbsp;if&nbsp;both of the below&nbsp;conditions are true.

Both have same&nbsp;number of characters.
Two strings can become anagram by changing&nbsp;at most&nbsp;k&nbsp;characters in a string.

Example:
Input: s1 = "fodr", s2 = "gork", k = 2
Output: true
Explanation: We can change 'f' -&gt; 'g' and 'd' -&gt; 'k' in s1.
Input: s1 = "geeks", s2 = "eggkf", k = 1
Output: false
Explanation: We can update or modify only 1 value but there is a need of modifying 2 characters i.e. 'g' and 'f' in s2.
Input: s1 = "adb", s2 = "fdab", k = 2
Output: false
Explanation: Both the strings have different numbers of characters.
Constraints:1 ≤ s1.size(), s2.size() ≤ 1051 ≤ k ≤ 105