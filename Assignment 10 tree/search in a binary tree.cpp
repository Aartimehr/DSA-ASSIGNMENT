class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root->val==val)
       {
           return root;
       }
       TreeNode* temp=root;

       while(temp!=NULL)
       {
           if(temp->val>val)
           {
               temp=temp->left;
           }
           else if(temp->val<val)
           {
               temp=temp->right;
           }
           else
           {
               return temp;
           }
       }
       TreeNode* nothing=NULL;
       return nothing;
    }
};
