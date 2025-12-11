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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root) return ans;
        queue<TreeNode *> q;
        int n=1;

        q.push(root);

        while(!q.empty()){
            int size=q.size();
            vector<int>levelelem;
            while(size--){
                TreeNode * temp=q.front();
                q.pop();
                levelelem.push_back(temp->val);
                if(temp->left) q.push(temp->left);
                if(temp->right)  q.push(temp->right);
            }
            if(n%2==0) {
                reverse(levelelem.begin(),levelelem.end());
                ans.push_back(levelelem);}
            else ans.push_back(levelelem);
            n++;
        }
        return ans;
    }
};