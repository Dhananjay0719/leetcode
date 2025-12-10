/*Structure of the node of the tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
// you are required to complete this function
// the function should return the count of Non-Leaf Nodes
class Solution {
  public:
    int nlnodes(Node *root){
        if(root==NULL)
        { return 0; }
        if(root->left==NULL && root->right==NULL){
          return 0;
        }
        return 1+nlnodes(root->left)+nlnodes(root->right);
    }
    int countNonLeafNodes(Node* root) {

        int ans=nlnodes(root);
        return ans;
        
    }
};