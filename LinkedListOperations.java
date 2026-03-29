public class LinkedListOperations {

    
    public class Node {
        int data;
        Node next;
        
        Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    public Node deleteNode(Node head, int value) {
        if (head == null) {
            return null;
        }
        
        if (head.data == value) {
            return head.next;
        }
        
        Node previous = null;
        Node current = head;
        
        while (current != null && current.data != value) {
            previous = current;
            current = current.next;
        }
        
        if (current != null) {
            previous.next = current.next;
        }
        
        return head;
    }
}
