// https://leetcode.com/problems/climbing-stairs/

public class Solution {
 public int climbStairs(int n) {

  return climb_Stairs(0, n, new int[n + 1]);
 }

 public int climb_Stairs(int i, int n, int dp[]) {
  if (i > n) {
   return 0;
  }
  if (i == n) {
   return 1;
  }
  if (dp[i] > 0) {
   return dp[i];
  }
  dp[i] = climb_Stairs(i + 1, n, dp) + climb_Stairs(i + 2, n, dp);
  return dp[i];
 }
}