import java.util.*;

public class unionOfTwoArrays {
    public static void union(int a[], int b[]) {
        HashSet<Integer> s = new HashSet<>();
        for (int i = 0; i < a.length; i++)
            s.add(a[i]);
        for (int i = 0; i < b.length; i++)
            s.add(b[i]);
        System.out.println(s.size());
        for (int i : s)
            System.out.print(i + " ");
    }

    public static void main(String[] args) {
        int n, m;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++)
            a[i] = sc.nextInt();

        int[] b = new int[n];
        for (int i = 0; i < n; i++)
            b[i] = sc.nextInt();
        union(a, b);

    }
}
