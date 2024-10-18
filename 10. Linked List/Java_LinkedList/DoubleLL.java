class Node{
    int data;
    Node next;
    Node back;

    Node(int data, Node next, Node back){
        this.data =  data;
        this.next = next;
        this.back = back;

    }

    Node(int data, Node next){
        this.data = data;
        this.next = next;
        this.back = null;
    }

    Node(int data){
        this.data = data;
        this.next = null;
    }
}




public class DoubleLL {


    static Node createArray2LL(int[] arr){
        int n = arr.length;


        Node head = new Node(arr[0]);
        Node mover = head;

        for(int i = 1; i < n; i++){
            Node temp = new Node(arr[i],null, mover);
            mover.next = temp;
            mover = temp;
        }
        return head;
    }

    static Node insertHead(Node head, int val){
        if(head == null){
            return new Node(val);
        }

        Node temp = new Node(val);

        temp.next = head;
        head.back = temp;
        head = temp;

        return head;
    }

    static Node insertTail(Node head, int val){
        if(head == null){
            return new Node(val);
        }
        Node tail = head;

        while (tail.next != null){
            tail = tail.next;
        }

        Node temp = new Node(val,null,tail);

        tail.next = temp;
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
        if(pos == 1){
            if(head == null){
                return new Node(val);
            }else{
                return insertHead(head, val);
            }
        }

        int cnt = 0;

        Node mover = head;

        while(mover != null){
            cnt++;
            if(cnt == pos)break;
            mover = mover.next;
        }

        if(mover == null && cnt < pos) return head;
        if(mover == null && cnt == pos) insertTail(head, val);

        Node prev = mover.back;

        Node temp = new Node(val,mover,prev);

        prev.next = temp;
        mover.back = temp;

        return head;
    }

    void insertNode(Node node, int val){
        if(node == null)return;

        Node temp = new Node(val, node, node.back);

        Node prev = node.back;

        if(prev != null){
            prev.next = temp;
        }

        node.back = temp;
    }


    static Node deleteHead(Node head){
        if(head ==  null){
            return head;
        }

        if(head.next == null){
            return null;
        }

        
        Node temp = head;

        head =  head.next;
        head.back = null;
        
        temp.next = null;

        return head;
    }

    static Node deleteTail(Node head){

        if(head == null || head.next == null){
            return null;
        }
        Node tail = head;

        while (tail.next != null) {
            tail = tail.next;
        }
        tail.back.next = null;
        tail.back = null;

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
        if (head == null || head.next == null) {
            return null;
        }


        Node temp = head;
        int cnt = 0;

        while (temp != null) {  
            cnt++;
            if(cnt == pos) break;
            temp = temp.next;
        }

        if(temp == null) return head;

        Node prev = temp.back;
        Node front = temp.next;

        if(prev == null) return deleteHead(head);
        else if(front == null) return deleteTail(head);
        else{
            prev.next = front;
            front.back = prev;
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
