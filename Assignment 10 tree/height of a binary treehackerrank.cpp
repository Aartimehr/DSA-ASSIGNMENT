int height(Node* root) {
        if(root==NULL)
        {
            return -1;
        }
        return 1+max(height(root->left),height(root->right));
    }
