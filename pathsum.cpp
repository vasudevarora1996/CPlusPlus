// Given the root of a binary tree and an integer targetSum, return true if the tree has a root-to-leaf path such that adding up all the values along the path equals targetSum.

// A leaf is a node with no children.


  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
    bool ans;
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==NULL){
            return false;
        }
        if(root->left==NULL && root->right==NULL) return (sum-root->val==0);
        return (root->left != NULL ? hasPathSum(root->left, sum-root->val) :false) |              (root->right != NULL ? hasPathSum(root->right, sum-root->val) :false);        
}
};
