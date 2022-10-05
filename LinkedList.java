package vid24oops;

public class LinkedList {
    Node head;
    private int size;

    LinkedList(){
        this.size = 0;
    }

    class Node{
        String data;
        Node next;

        Node(String data){
            this.data = data;
            this.next = null;
            size++;
        }
    }

    //Add to first position
    public void addFirst(String data){
        Node newNode = new Node(data);
        if(head == null){
            head = newNode;
            return;
        }
        size--;
        newNode.next = head;
        head = newNode;
    }

    //Add to last position
    public void addLast(String data){
        Node newNode = new Node(data);
        if(head == null){
            head = newNode;
            return;
        }
        size--;

        Node currNode = head;   //Head is considered as current node
        while(currNode.next!=null) //Traverse till the last node
        {
            currNode = currNode.next;  //The currentNode is pointing to next Node
        }

        currNode.next = newNode; //The new Node becomes the current node. Hence Node is successfully added at the end
    }

    //To print
    public void printList(){

        if(head == null){
            System.out.println("List is empty");
            return;
        }
        
        Node currNode = head;   
        while(currNode!=null) 
        {   
            System.out.print(currNode.data + "->");
            currNode = currNode.next;  
        }

        System.out.println("Null");
    }

    //To delete first
    public void deleteFirst(){
        if(head == null){
            System.out.println("List is empty");
            return;
        }
        head = head.next;
        size--;
    }

    //To delete last
    public void deleteLast(){
        if(head == null){
            System.out.println("List is empty");
            return;
        }
      
        //Just incase we have only one node
        if(head.next == null){
                head = null;
                return;
        }

        Node secondLast = head;   //First it points to head(first element). But it traverse until last but one node
        Node lastNode = head.next;   //First it points to second element. But it traverse until for last node
        while(lastNode.next!=null){
            lastNode = lastNode.next;
            secondLast = secondLast.next;
        }

        secondLast.next = null;
    }

    private int getSize(){
        return size;
    }

    public void reverseList(){
        if(head == null || head.next == null)  //If no node or if one node
        {
            return;
        }

        Node prevNode = head;
        Node currNode = head.next;
        while(currNode!=null){
            Node nextNode = currNode.next;
            currNode.next = prevNode;

            //Update
            prevNode = currNode;    //Ex: 6 7 8. Here 6 which is curr becomes prev
            currNode= nextNode;     // 7 becomes curr
        }

        //After reaching the last node
        head.next = null;
        head = prevNode; //Last node which we considered as prevNode becomes head
    }

    //Recursive way of reversing a linked list
    public Node recursiveRev(Node head){
        if(head == null || head.next == null){
            return head;
        }

        Node newHead = recursiveRev(head.next);
        head.next.next = head; //If 2 3 4, then 2 comes in head.next.next's position
        head.next = null; // Connection btwn 2 -> 3 breaks. Its now from 3 -> 2
        return newHead;

    }
    public static void main(String[] args) {
        LinkedList ll = new LinkedList();

        ll.addFirst("A");
        ll.addFirst("is");

        ll.printList();

        ll.addLast("List");
        ll.printList();

        ll.addFirst("This");
        ll.printList();

        // ll.deleteFirst();
        // ll.printList();

        // ll.deleteLast();
        // ll.printList();

        System.out.println("Size of LL: " + ll.getSize());
        System.out.println();
        ll.reverseList();
        ll.printList();

        ll.head = ll.recursiveRev(ll.head);
        ll.printList();
    }
}
