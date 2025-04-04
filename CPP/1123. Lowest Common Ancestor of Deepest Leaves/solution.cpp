class Solution {
    public:
        pair<int, TreeNode*> dfs(TreeNode* root) {
            if (!root) return {0, nullptr};
            
            auto left = dfs(root->left);
            auto right = dfs(root->right);
            
            if (left.first == right.first) return {left.first + 1, root};
            return left.first > right.first ? make_pair(left.first + 1, left.second) 
                                            : make_pair(right.first + 1, right.second);
        }
        
        TreeNode* lcaDeepestLeaves(TreeNode* root) {
            return dfs(root).second;
        }
    };
    