
public class NthNodePostOrder {

	static int flag = 0;

	public static void NthPostordernode(Node root, int N)
	{

		if (root == null)
			return;

		if (flag <= N)
		{
			NthPostordernode(root.left, N);
			NthPostordernode(root.right, N);
			flag++;
			if (flag == N)
				System.out.print(root.data);
		}
	}


	public static void main(String args[]) {
		Node root = new Node(25);
		root.left = new Node(20);
		root.right = new Node(30);
		root.left.left = new Node(18);
		root.left.right = new Node(22);
		root.right.left = new Node(24);
		root.right.right = new Node(32);

		int N = 6;

		NthPostordernode(root, N);
	}
}

class Node
{
	int data;
	Node left, right;
	Node(int data)
	{
		this.data=data;
	}
};
