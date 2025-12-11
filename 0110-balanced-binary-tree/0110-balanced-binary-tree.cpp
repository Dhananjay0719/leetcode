class Solution {
public:
    int height(TreeNode * root){
        if(root==NULL) return 0;
        return 1+max(height(root->left),height(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true ;
        if(root->left ==NULL && root->right == NULL) return true;
        int diff;

        if(root->left==NULL){diff=height(root->right) *-1;}
        else if(root->right==NULL){diff=height(root->left);}
        else{diff=height(root->left)-height(root->right);}  

        if (diff==1 || diff==-1 || diff==0){
            return isBalanced(root->left) && isBalanced(root->right);
        }
        return false;
    }
};