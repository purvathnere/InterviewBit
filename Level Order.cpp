vector<vector<int> > Solution::levelOrder(TreeNode* A)
{
    vector<vector<int>>ans;
    vector<int> temp;
    queue<TreeNode*> q;
    q.push(A);
    q.push(NULL);
    while(q.size())
    {
        if(q.front()==NULL)
        {
            q.pop();
            ans.push_back(temp);
            temp.clear();
            if(q.size())
            {
                q.push(NULL);
            }
            else
            break;
        }
       
        TreeNode* root=q.front();
        q.pop();
       
       int root_val=root->val;
       
        temp.push_back(root_val);
       
        if(root->left)
        {
            q.push(root->left);
        }
        if(root->right)
        {
            q.push(root->right);
        }
    }
    return ans;
}

