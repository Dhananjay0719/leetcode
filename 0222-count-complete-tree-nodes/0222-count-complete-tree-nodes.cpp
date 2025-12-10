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

    int traversalcount(TreeNode * root,int &count){
        if(root==NULL) return 0;

        count++;
        traversalcount(root->left,count);
        traversalcount(root->right,count);

        return count;
    }
    int countNodes(TreeNode* root) {
        int total=0;
        int ans=traversalcount(root,total);
        return ans;
    }
};