/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 /* Balanced Binary Tree. This question is asked to check if the given binary tree is balanced.I use the recursive method ,checking every
    node if it's height is not greater or smaller than it's sibling for one unit. */
    
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root == nullptr){
            return true;
        }
        else{
            if(abs((height(root->right) - height(root->left))) < 2){
                return isBalanced(root->left) && isBalanced(root->right);
            }
        }
        return false;
    }
    int height(TreeNode * root){
        if(root == nullptr){
            return 0;
        }
        else{
            int h1,h2;
            h1 = height(root->left) + 1;
            h2 = height(root->right) + 1;
            return h1 > h2?h1:h2;
        }
    }
};
