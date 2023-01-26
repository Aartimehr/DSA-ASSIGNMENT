class Solution {
public:
    vector<int>output;
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL)
        {
            return output;
        }
        output.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
        return output;
        
    }
};
