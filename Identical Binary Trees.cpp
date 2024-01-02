int Solution::isSameTree(TreeNode* A, TreeNode* B) {
    if(A==NULL&&B!=NULL){
        return false;
    }
    if(A!=NULL&&B==NULL){
        return false;
    }
    if(A==NULL&&B==NULL){
        return true;
    }
    if(A->val!=B->val){
        return false;
    }
    bool lb = isSameTree(A->left,B->left);
    bool rb = isSameTree(A->right,B->right);
    return lb&&rb;
}
