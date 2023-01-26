class Solution {
public:
     vector<int>output;
    vector<int> postorderTraversal(TreeNode* root) {
        if(root==NULL)
        {
            return output;
        }
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        output.push_back(root->val);
        return output;
    }
};
