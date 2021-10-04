import java.util.*;
// we do not need access specifier as file name and class name is not same 
class Test {
  
    public static void main(String args[])
    {
        // Creating object of the
        // class linked list
        LinkedList<String> ll
            = new LinkedList<String>();
  
        // Adding elements to the linked list
        ll.add("A");
        ll.add("B");
        ll.addLast("C");
        ll.addFirst("D");
        ll.add(2, "E");
  
        System.out.println(ll);
  
        ll.remove("B");
        ll.remove(3);
        ll.removeFirst();
        ll.removeLast();
  
        System.out.println(ll);
    }
}
