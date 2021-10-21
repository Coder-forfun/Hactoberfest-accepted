import java.util.Stack;
public class StackPeekMethod
{
    public static void main(String[] args)
    {
        Stack < String > stk = new Stack < > (); 
        stk.push("Apple");
        stk.push("Grapes");
        stk.push("Mango");
        stk.push("Orange");
        System.out.println("Stack: " + stk); 
        String fruits = stk.peek(); 
        System.out.println("Element at top is " + fruits);
    }
}