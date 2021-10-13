// https://leetcode.com/problems/n-th-tribonacci-number/

class Solution {
 public int tribonacci(int n) {

  return fibdp(n, new int[n + 1]);

 }

 public int fibdp(int n, int[] dp) {
  if (n == 0 || n == 1)
   return n;
  if (n == 2)
   return 1;

  if (dp[n] != 0)
   return dp[n];

  dp[n] = fibdp(n - 1, dp) + fibdp(n - 2, dp) + fibdp(n - 3, dp);

  return dp[n];
 }
}