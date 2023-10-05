ListNode* Solution::deleteDuplicates(ListNode* A) {
ListNode* current = A;
ListNode* runner = current->next;
ListNode* newList = new ListNode(0);
ListNode* newptr = newList;
bool duplicate = false;
int count = 0;
while (runner!=NULL) {
if(runner->val == current->val){
ListNode* temp = runner;
current->next = runner->next;
runner = runner->next;
duplicate = true;
delete temp;
}else{
// cout << current->val << runner->val<<endl;
if (duplicate==false) {
ListNode * temp = new ListNode(current->val);
// cout<< "non duplicate"<<current->val<<endl;
newptr->next = temp;
newptr = newptr->next;
}else{
duplicate = false;
}
current = runner;
runner = runner->next;
count++;
}
}

if (!duplicate) {
newptr->next = current;
}
return newList->next;
}
