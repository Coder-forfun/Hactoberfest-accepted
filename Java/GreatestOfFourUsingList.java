import java.util.Scanner;
import java.util.*;
import java.util.Optional;
import java.util.Comparator;

public class GreatestOfFourUsingList {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List<Integer> list = new ArrayList<>();
        System.out.println("Please enter first number: ");
        list.add(sc.nextInt());
        System.out.println("Please enter second number: ");
        list.add(sc.nextInt());
        System.out.println("Please enter third number: ");
        list.add(sc.nextInt());
        System.out.println("Please enter fourth number: ");
        list.add(sc.nextInt());
        
        System.out.println("Largest of four numbers is: " + list.stream().max(Integer::compare).get());
        sc.close();
    }
}
