class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
       vector<int>output;
       stack<TreeNode*>S;
       if(root) S.push(root);
       while(!S.empty())
       {
           TreeNode* temp=S.top();
           output.push_back(temp->val);
           S.pop();
           if(temp->left)
           {
               S.push(temp->left);
               temp->left=NULL;
           }
           if(temp->right){
               S.push(temp->right);
           }
       }
       reverse(output.begin(),output.end());
       return output;
    }
    
    
};
