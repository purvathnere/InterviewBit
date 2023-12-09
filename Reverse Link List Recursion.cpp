ListNode* rec(ListNode* A)
{
    if(A==NULL || A->next == NULL) return A;
   
    ListNode* newhead = rec(A->next);
    A->next->next = A;
    A->next = NULL;
    return newhead;
}
ListNode* Solution::reverseList(ListNode* A) {
    return rec(A);
}
