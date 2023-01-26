class Solution {
public:
     vector<int>output;
    vector<int> inorderTraversal(TreeNode* root) {
       
          if(root==NULL)
          {
              return output;
          }
           inorderTraversal(root->left);
           output.push_back(root->val);
           inorderTraversal(root->right);
           return output;
    }
};
