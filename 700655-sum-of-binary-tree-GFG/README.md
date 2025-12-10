# [Sum of Binary Tree](https://www.geeksforgeeks.org/problems/sum-of-binary-tree/0)
## Easy
Given a binary tree, find the sum of values of all the nodes.&nbsp;
Examples:
Input: root = [10, 20, 30, 40, 60, N, N] &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 10
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; /&nbsp;&nbsp; \
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 20&nbsp;&nbsp;&nbsp;&nbsp;30
 &nbsp;&nbsp;&nbsp;&nbsp; /&nbsp;&nbsp;&nbsp; \
 &nbsp;&nbsp; 40&nbsp;&nbsp;&nbsp;&nbsp; 60
Output: 160Explanation: The sum of all the nodes is 10 + 20 + 30 + 40 + 60.
Input: root = [1, 3, 2]&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1
 &nbsp;&nbsp; /&nbsp;&nbsp; \
 &nbsp;&nbsp;3&nbsp;&nbsp;&nbsp;&nbsp; 2
Output: 6Explanation: The sum of all the nodes is 1 + 2 + 3 = 6.
Input: root = [1, 2, N, 4, N] &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 1
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; /&nbsp;&nbsp;&nbsp;&nbsp; 
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 2&nbsp;&nbsp;&nbsp;&nbsp;
 &nbsp;&nbsp;&nbsp;&nbsp; /&nbsp;&nbsp;&nbsp;
 &nbsp;&nbsp; 4&nbsp;&nbsp;&nbsp;&nbsp; 
Output: 7Explanation: The sum of all the nodes is 1 + 2 + 4 = 7.
Constraints:1 &lt;= number of nodes &lt;= 104-105&nbsp;&lt;= node-&gt;data &lt;= 105