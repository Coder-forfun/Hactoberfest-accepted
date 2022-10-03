import java.util.LinkedList;
import java.util.Queue;

// class to create nodes
class Node {
    int key;
    Node left, right;

    public Node(int item) {
        key = item;
        left = right = null;
    }
}

class LevelOrderBinaryTree {
    Node root;
    
    public void levelOrderTraversal(Node node) {
        // if Binary Tree is Empty
        if (node == null)
            return;

        // Queue Data structure to store each level of
        // Binary Tree nodes
        Queue<Node> q = new LinkedList<>();
        q.add(node);
        while (!q.isEmpty()) {

            int n = q.size(); // no. of nodes in a particular level

            // for loop to go through all the nodes of each level
            for (int i = 0; i < n; i++) {
                Node temp = q.poll();
                System.out.print(temp.key + " ");
                if(temp.left != null)
                    q.add(temp.left);

                if(temp.right != null)
                    q.add(temp.right);
            }
            System.out.println("");
        }
    }

    public static void main(String[] args) {

        // create an object of BinaryTree
        LevelOrderBinaryTree tree = new LevelOrderBinaryTree();

        // create nodes of the tree
        tree.root = new Node(1);
        tree.root.left = new Node(2);
        tree.root.right = new Node(3);
        tree.root.left.left = new Node(4);

        System.out.print("\nBinary Tree: \n");

        // function that prints level order traversal of Binary Tree
        tree.levelOrderTraversal(tree.root);
    }
}
