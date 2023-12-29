ListNode* Solution::reverseList(ListNode* A) {
    ListNode *curr=A;

    ListNode *prev=NULL;

    while(curr!=NULL){

        ListNode *temp= curr->next;

        curr->next=prev;

        prev=curr;

        curr=temp;

    }

    return prev;


}
