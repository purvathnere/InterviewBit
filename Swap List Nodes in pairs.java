public class Solution {
    public ListNode swapPairs(ListNode A) {
        ListNode head = new ListNode(0);
        ListNode tempHead = head;
    
        while(A != null){
            tempHead.next = swap(A, A.next);
            tempHead = tempHead.next.next;
            A = A.next;
        }
        
        return head.next;
    }
    
    private ListNode swap(ListNode a, ListNode b){
        if(b == null)
            return a;
        a.next = b.next;
        b.next = a;
        return b;
    }
}
