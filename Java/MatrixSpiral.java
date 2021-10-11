import java.util.*;
public class MatrixSpiral {
	
    public static void main(String[] args) {
    	Scanner sc = new Scanner(System.in);
    	int n = sc.nextInt();
    	int m = sc.nextInt();
    	int[][] arr = new int[m][n];
    	for(int i = 0; i < m; i++) {
    		for(int j = 0; j < n; j++) {
    			arr[i][j] = sc.nextInt();
    		}
    	}
    	ArrayList<Integer> al = new ArrayList<>();
    	int totalSize = m*n;
    	int top = 0, bottom = m-1, left = 0, right = n-1;
    	while(al.size() < totalSize) {
    		for(int i = left; i <= right && al.size() < totalSize; i++) {
    			al.add(arr[top][i]);
    		}
    		top++;
    		for(int i = top; i <= bottom && al.size() < totalSize; i++) {
    			al.add(arr[i][right]);
    		}
    		right--;
    		for(int i = right; i >= left && al.size() < totalSize; i-- ) {
    			al.add(arr[bottom][i]);
    		}
    		bottom--;
    		for(int i = bottom; i >= top && al.size() < totalSize; i--) {
    			al.add(arr[i][left]);
    		}
    		left++;
    	}
    	for(int a: al) System.out.print(a + " ");
    }
}
