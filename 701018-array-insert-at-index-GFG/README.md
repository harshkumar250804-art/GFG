# [Array Insert at Index](https://www.geeksforgeeks.org/problems/array-insert-at-index/1)
## Easy
You are given an array arr(0-based index) and two positive integer index and val. You need to insert an val at given index.
Examples:
Input: arr[] = [1, 2, 3, 4, 5], index = 5, val = 90Output: 1 2 3 4 5 90
Explanation: 90 is inserted at index 5(0-based indexing). After inserting, array elements are like [1, 2, 3, 4, 5, 90].
Input: arr[] = [1, 2, 3, 4, 5], index = 2, val = 90
Output: [1, 2, 90, 3, 4, 5]
Explanation: 90 is inserted at index 2(0-based indexing). After inserting, array elements are like [1, 2, 90, 3, 4, 5].
Constraints:&nbsp; 1 ≤arr.size()&nbsp;≤&nbsp;105&nbsp; 0 ≤ val, arr[i]&nbsp;≤&nbsp;106&nbsp; 0 ≤&nbsp;index&nbsp;≤&nbsp;arr.size()&nbsp;