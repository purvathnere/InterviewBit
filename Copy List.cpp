RandomListNode* Solution::copyRandomList(RandomListNode* head) {
   
    RandomListNode* curr=head;
   
    RandomListNode* dummy = new RandomListNode(0);
    RandomListNode* p=dummy;
   
    unordered_map<RandomListNode* , RandomListNode*> mp;
   
    while(curr!=NULL)
    {
        RandomListNode* node=new RandomListNode(curr->label);
        mp[curr]=node;
        p->next=node;
        p=p->next;
        curr=curr->next;
       
       
    }
   
    curr=dummy->next;
    RandomListNode* curr1=head;
   
    while(curr1!=NULL)
    {
        RandomListNode* node=curr1->random;
        curr->random=mp[node];
        curr=curr->next;
        curr1=curr1->next;
    }
   
    return  dummy->next;
}
