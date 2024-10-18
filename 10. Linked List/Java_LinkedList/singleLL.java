class Node{
    int data;
    Node next;

    Node(int data, Node next){
        this.data =  data;
        this.next = next;
    }

    Node(int data){
        this.data = data;
        this.next = null;
    }
}




public class singleLL {
    static Node createArray2LL(int[] arr){

        Node head = new Node(arr[0]);

        Node mover = head;

        int n = arr.length;

        for(int i = 1; i < n; i++){
            Node temp = new Node(arr[i]);
            mover.next = temp;
            mover = temp;
        }
        return head;
    }

    static Node insertHead(Node head, int val){
        return new Node(val,head);
    }

    static Node insertTail(Node head, int val){
        if(head == null){
            return new Node(val);
        }
        Node mover = head;

        while (mover.next != null){
            mover = mover.next;
        }

        mover.next = new Node(val);
        return head;
    }
    static int getLength(Node head){
        if (head == null){
            return 0;
        }

        Node mover = head;
        int cnt = 0;
        while(mover != null){
            cnt++;
            mover = mover.next;
        }

        return cnt;
    }
    static Node insertPos(Node head, int val, int pos){
        int n = getLength(head);

        if(pos > n || pos < 1)  return head;

        if(pos == 1){
            return new Node(val, head);
        }

        int count = 0;
        Node mover = head;

        while(mover != null){

            count++;
            if(count == (pos - 1)){
                mover.next = new Node(val, mover.next);
                break;
            }
            mover = mover.next;
        }
        return head;
    }


    static Node deleteHead(Node head){
        if(head ==  null){
            return head;
        }
        Node temp = head;
        head =  head.next;

        temp.next = null;
        return head;
    }

    static Node deleteTail(Node head){

        if(head == null || head.next == null){
            return null;
        }
        Node tail = head;

        while(tail.next.next  != null){
            tail = tail.next;
        }

        tail.next = null;

        return head;

    }

    static boolean isPresent(Node head, int val){
        Node mover = head;

        while(mover != null){
            if(mover.data == val) return true;
            mover = mover.next;
        }
        return false;
    }

    static Node deletePos(Node head, int pos) {
        if (head == null) {
            return null;
        }

        int n = getLength(head);

        // If pos is greater than the length or less than 1, return the original list
        if (n < pos || pos < 1) {
            return head;
        }

        // If we are deleting the head node (position 1)
        if (pos == 1) {
            Node temp = head;
            head = head.next; // Move the head to the next node
            temp.next = null; // Disconnect the old head node
            return head;
        }

        Node mover = head;
        int cnt = 1; // Start counting from 1

        // Move to the node just before the position
        while (cnt < pos - 1) {
            mover = mover.next;
            cnt++;
        }

        // At this point, mover is the node right before the one we want to delete
        Node nxt = mover.next; // Node to be deleted

        if (nxt != null) {
            mover.next = nxt.next; // Bypass the node to be deleted
            nxt.next = null;       // Disconnect the deleted node
        }

        return head;
    }

    static  Node deleteVal(Node head, int val){
        Node mover = head;
        if(head == null){
            return head;
        }
        if(head.data == val){
            head = head.next;
            mover.next = null;
            return head;
        }

        Node prev = null;

        while (mover != null){
            if(mover.data == val){
                prev.next = mover.next;
                break;
            }
            prev = mover;
            mover = mover.next;
        }

        return head;
    }


    static void showList(Node head){
        Node mover = head;

        while(mover != null){
            System.out.print(mover.data + " ");
            mover = mover.next;
        }
        System.out.println();
    }

    public  static void main(String[] arg){

        int[] arr = {12,34,56,23,78};

        Node head = createArray2LL(arr);


        showList(head);

    }
}
