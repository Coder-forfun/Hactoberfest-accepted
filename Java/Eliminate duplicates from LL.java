import java.util.*;
class LinkedListNode<T> {
    T data;
    LinkedListNode<T> next;
    
    public LinkedListNode(T data) {
        this.data = data;
    }
}
class Solution {
	public static LinkedListNode<Integer> removeDuplicates(LinkedListNode<Integer> head) {
        if(head==null||head.next==null){
            return head;
        }
        LinkedListNode<Integer> i=head,j=head.next;
        while(j!=null){
            if(i.data.equals(j.data)){
                j=j.next;
            }else{
                i.next=j;
                i=i.next;
            }
        }
        i.next=j;
        return head;
	}
}
public class Main
{
    public static LinkedListNode<Integer> takeInput(){
        LinkedListNode<Integer> head = null, tail = null;
        Scanner s = new Scanner(System.in);
        String[] datas = s.nextLine().trim().split("\\s");

        int i = 0;
        while(i < datas.length && !datas[i].equals("-1")) {
            int data = Integer.parseInt(datas[i]);
            LinkedListNode<Integer> newNode = new LinkedListNode<Integer>(data);
            if(head == null) {
                head = newNode;
                tail = newNode;
            }
            else {
                tail.next = newNode;
                tail = newNode;
            }
            i += 1;
        }
        return head;
    }
    public static void print(LinkedListNode<Integer> head){
        while(head != null) {
            System.out.print(head.data + " ");
            head = head.next;
        }
        
        System.out.println();
    }
	public static void main(String[] args) {
		LinkedListNode<Integer> head = takeInput(); 
        head = Solution.removeDuplicates(head);
        print(head);
	}
}