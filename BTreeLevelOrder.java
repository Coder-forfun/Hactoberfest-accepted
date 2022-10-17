class TreeNode   
{  
int val;  
  
TreeNode left, right;  
 
public TreeNode(int i)  
{  
val = i;  
right = left = null;  
}  
}  
  
public class BTreeLevelOrder    
{  

TreeNode r;  
  
public BTreeLevelOrder() { r = null; }  
  
void displayLevelOrder()  
{  
int ht = treeHeight(r);  
int j;  
  
for (j = 1; j <= ht; j++)  
{  
displayCurrentLevel(r, j);  
}  
}  
   
int treeHeight(TreeNode r)  
{  
if (r == null)  
{  
return 0;  
}  
else   
{  
 
int lh = treeHeight(r.left);  
int rh = treeHeight(r.right);  
  
if (lh > rh)  
{  
return (lh + 1);  
}  
else  
{  
return (rh + 1);  
}  
}  
}  

void displayCurrentLevel(TreeNode r, int l)  
{  
  
if (r == null)  
{  
return;  
}  

if (l == 1)  
{  
System.out.print(r.val + " ");  
}  
  
else if (l > 1)   
{  
displayCurrentLevel(r.left, l - 1);  
displayCurrentLevel(r.right, l - 1);  
}  
}  
 
public static void main(String argvs[])  
{  
  
BTreeLevelOrder  tree = new BTreeLevelOrder ();  
   
tree.r = new TreeNode(18);  
  
tree.r.left = new TreeNode(20);  
tree.r.right = new TreeNode(30);  
tree.r.left.left = new TreeNode(60);  
tree.r.left.right = new TreeNode(34);  
tree.r.right.left = new TreeNode(45);  
tree.r.right.right = new TreeNode(65);  
tree.r.left.left.left = new TreeNode(12);  
tree.r.left.left.right = new TreeNode(50);  
tree.r.left.right.left = new TreeNode(98);  
tree.r.left.right.right = new TreeNode(82);  
tree.r.right.left.left = new TreeNode(31);  
tree.r.right.left.right = new TreeNode(59);  
tree.r.right.right.left = new TreeNode(71);  
tree.r.right.right.right = new TreeNode(41);  
  
  
System.out.println("Level order traversal of binary tree is ");  
tree.displayLevelOrder();  
}  
} 
