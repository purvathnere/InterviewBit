ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    ListNode* head=A;
    ListNode* slow=A,*fast=A;
    B++;
    while(B && fast!=NULL){
        fast=fast->next;
        B--;
    }
    if(B) return head->next;
    while(fast!=NULL){
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=slow->next->next;
    return head;
}
