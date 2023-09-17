public class Solution {
    public ListNode reverse(ListNode head)
    {
        ListNode prev=null,temp=null,cur=head;
        while(cur!=null)
        {
             temp = cur.next;
            cur.next = prev;
        prev = cur;
            cur = temp;
        }
        return prev;
    }
    public ListNode reorderList(ListNode A) {
        if(A==null || A.next==null)
            return A;
        ListNode slow=A,fast=A,cur=A,prev=null;
        while(fast!=null && fast.next!=null)
        {
            prev=slow;
            slow=slow.next;
            fast=fast.next.next;
        }
        //System.out.println(slow.val);
       // prev=slow;
        prev.next=null;
       
        slow=reverse(slow);
       
       int  f=1;
        ListNode d=new ListNode(-1);
        ListNode c=d;
        while(slow!=null && cur!=null)
        {
           if(f==1)
           {
               c.next=cur;
               c=c.next;
               cur=cur.next;
               f=1-f;
               continue;
           }
           else if(f==0)
           {
               c.next=slow;
               c=c.next;
               slow=slow.next;
               f=1-f;
           }

        }
        while(cur!=null)
        {
            c.next=cur;
               c=c.next;
               cur=cur.next;
        }
       while(slow!=null)
       {
           c.next=slow;
           c=c.next;
           slow=slow.next;
           
       }
        return d.next;
    }
}
