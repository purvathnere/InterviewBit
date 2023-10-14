ListNode* Solution::detectCycle(ListNode* A) {
  
      ListNode* h=NULL;
      while(A!=NULL){
         if(A->val <0){
             A->val=abs(A->val);
             return A;
         }
         else{
             A->val=A->val*-1;
             A=A->next;
         }
      }
      h=A;
      return h;
}
