std::vector<TreeNode*> generate_trees(int root_val, int left, int right) {
    if (right < left) return std::vector<TreeNode*>{};
    std::vector<TreeNode*> subroots, left_subtree, right_subtree;
    for (int i = left; i < root_val; ++i) {
        std::vector<TreeNode*> temp = generate_trees(i, left, root_val - 1);
        left_subtree.insert(left_subtree.end(), temp.begin(), temp.end());
    }
    for (int j = root_val + 1; j <= right; ++j) {
        std::vector<TreeNode*> temp = generate_trees(j, root_val + 1, right);
        right_subtree.insert(right_subtree.end(), temp.begin(), temp.end());
    }
    if (right_subtree.size() == 0)
        right_subtree.push_back(NULL);
    if (left_subtree.size() == 0)
        left_subtree.push_back(NULL);
    for (auto &left_subroot : left_subtree) {
        for (auto &right_subroot : right_subtree) {
            TreeNode* subroot = new TreeNode(root_val);
            subroot->left = left_subroot;
            subroot->right = right_subroot;
            subroots.push_back(subroot);
        }
    }
    return subroots;
} 

vector<TreeNode*> Solution::generateTrees(int A) {
    std::vector<TreeNode*> roots;
    for (int i = 1; i <= A; ++i) {
        std::vector<TreeNode*> temp = generate_trees(i, 1, A);
        roots.insert(roots.end(), temp.begin(), temp.end());
    }
    return roots;
}
