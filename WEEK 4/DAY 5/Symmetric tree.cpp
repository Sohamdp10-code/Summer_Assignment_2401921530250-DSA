class Solution {
public:

    bool mirror(TreeNode* left, TreeNode* right){

        if(left==NULL && right==NULL)
            return true;

        if(left==NULL || right==NULL)
            return false;

        if(left->val != right->val)
            return false;

        return mirror(left->left, right->right) &&
               mirror(left->right, right->left);
    }

    bool isSymmetric(TreeNode* root) {

        return mirror(root->left, root->right);

    }
};
