/**
Given the root of a binary tree, return all root-to-leaf paths in any order
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public List<String> binaryTreePaths(TreeNode root) {
        
        List<String>res = new ArrayList<>();
        fillPaths(root,"",res);
        return res;
    }
    
    
   public void fillPaths(TreeNode node,String str,List<String> res)
    {
        if (node == null)
            return;
        
        if(node.left == null && node.right == null)
        {
            res.add(str+node.val); 
            return;
        }
          fillPaths(node.left, str+node.val+"->", res); 
          fillPaths(node.right, str+node.val+"->", res); 
    }
}
