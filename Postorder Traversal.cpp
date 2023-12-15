void post(TreeNode* root,vector<int>&res)
    {  if(!root)return;
       
    post(root->left,res);
   post(root->right,res);
    res.push_back(root->val);
       
    }
vector<int> Solution::postorderTraversal(TreeNode* A) {
    vector<int>res;
   
    post(A,res);
   
    return res;
}
