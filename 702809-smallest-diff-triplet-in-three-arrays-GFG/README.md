# [Smallest Diff Triplet in Three Arrays](https://www.geeksforgeeks.org/problems/happiest-triplet2921/1)
## Medium
Given three integer arrays a[], b[] and c[] of equal size n, find a triplet (one element from each array) that minimizes the difference between its maximum and minimum elements. If there is a tie, return the triplet with the smallest sum. The final triplet must be returned in descending order.
Examples:
Input: a[] = [5, 2, 8] , b[] = [10, 7, 12] , c[] = [9, 14, 6]
Output: [7, 6, 5]
Explanation: The triplet [5, 7, 6]&nbsp; has difference (maximum - minimum)= (7 - 5) = 2 which is minimum of all triplets.  
Input: a[] = [15, 12, 18, 9] , b[] = [10, 17, 13, 8] , c[] = [14, 16, 11, 5]
Output: [11, 10, 9]Explanation:  Multiple triplets have the same minimum difference, and among them [11, 10, 9] has the smallest sum, so it is chosen.
