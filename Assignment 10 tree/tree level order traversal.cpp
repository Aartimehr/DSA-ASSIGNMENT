void levelOrder(Node * root) {
          queue<Node *> S;
        S.push(root);
        Node *temp = NULL;
        while(!S.empty())
        {   
            temp = S.front();
            S.pop();
            cout<<temp->data<<" ";
            if(temp->left)
            {
                S.push(temp->left);
            }
            if(temp->right)
            {
                S.push(temp->right);
            }
        }

    }
