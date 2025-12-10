/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// Class Solution
class Solution {
  public:
    // Function to count the number of leaf nodes in a binary tree.
    int calc(Node * root,int &total){
        if(!root) return 0;
        if(root->left==NULL && root->right==NULL){
            total++;
            return total;
        }
        
        calc(root->left,total);
        calc(root->right,total);
        return total;
    }
    
    int countLeaves(Node* root) {
        // write code here
        int total=0;
        int ans=calc(root,total);
        return ans;
    }
};