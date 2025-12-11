/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    pair<int,int> level(TreeNode * root,int x ,int y){
        if(!root) return {-1,-1};
        int l1=-1,l2=-1;
        int count=1;
        queue<TreeNode * > q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            while(size--){
            TreeNode * temp=q.front();
            q.pop();

            if(temp->val==x) l1=count;
            if(temp->val==y) l2=count;
            
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
            }
            count++;
        }
        return {l1,l2};
    }
    bool sparent(TreeNode * root,int x,int y){
        if(!root) return false;
        if(root->left!=NULL && root->right!=NULL) {
        if((root->left->val ==x && root->right->val==y) || (root->right->val==x && root->left->val==y)){
            return true;
        }
        }
        return sparent(root->left,x,y) || sparent(root->right,x,y);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        pair<int,int>lvl;
        lvl=level(root,x,y);
        if(lvl.first!=lvl.second){
            return false;
        }

        bool issameparent=sparent(root,x,y);
        return !issameparent;
    }
};