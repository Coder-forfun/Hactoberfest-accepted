import java.util.Scanner;
import java.util.*;

class Edge implements Comparable<Edge>
{
	int source;
    int dest;
    int weight;
    
    public int compareTo(Edge o)
    {
    	return this.weight-o.weight;
    }
}

public class Solution {

	public static int findParent(int v, int parent[])
    {
    	if(parent[v]==v)
        	return v;
            
        return findParent(parent[v],parent);
    }

	public static void kruskal(Edge input[], int n)
    {
    	Arrays.sort(input);
        Edge[] output=new Edge[n-1];
        int parent[]=new int[n];
        for(int i=0;i<n;i++)
        {
        	parent[i]=i;
        }
        int count=0;
        int i=0;
        while(count!=n-1)
        {
        	Edge currentEdge=input[i];
            
            int sourceParent = findParent(currentEdge.source,parent);
            int destParent= findParent(currentEdge.dest,parent);
            
            if(sourceParent!=destParent)
            {
            	output[count]=currentEdge;
                count++;
                parent[sourceParent]=destParent;
            }
            i++;
        }
        
        for(int j=0;j<n-1;j++)
        {
        	if(output[j].source>output[j].dest)
            	System.out.println(output[j].dest +" "+ output[j].source +" "+ output[j].weight);
            else
            	System.out.println(output[j].source +" "+ output[j].dest +" "+ output[j].weight);
        }
        
    }

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int V = sc.nextInt();
		int E = sc.nextInt();
        Edge[] input=new Edge[E];
        for(int i=0;i<E;i++)
        {
        	input[i]=new Edge();
            input[i].source=sc.nextInt();
            input[i].dest=sc.nextInt();
            input[i].weight=sc.nextInt();
        }
        kruskal(input,V);

		/* Write Your Code Here
		 * Complete the Rest of the Program
		 * You have to take input and print the output yourself
		 */
	}
}
