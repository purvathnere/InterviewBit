vector<int> Solution::preorderTraversal(TreeNode* root)
{
   
    vector<int>v;
    if(root==NULL)
        return v;
    stack<TreeNode*>s;
    s.push(root);
    while(s.empty()==false)
    {
        TreeNode* curr=s.top();
        v.push_back(curr->val);
        s.pop();
       
        if(curr->right!=NULL)
        {
            s.push(curr->right);
        }
        if(curr->left!=NULL)
        {
            s.push(curr->left);
        }
    }
return v;
}

