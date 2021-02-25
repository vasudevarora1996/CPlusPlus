/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
	struct Node {
		int data;
		Node* left;
		Node* right;
	}
*/  
// To check whether given Binary tree is Binary search tree.

    vector<int> nodes_data;
    void inorder(Node *node){
        if(node==NULL) return;
        else{
            inorder(node->left);
            nodes_data.push_back(node->data);
            inorder(node->right);
        }
    } 
	bool checkBST(Node* root) {
		inorder(root);
        for(int i=0;i<nodes_data.size()-1;i++){
            if(nodes_data[i+1]<=nodes_data[i]) return false;
            
        }
        return true;
	}
