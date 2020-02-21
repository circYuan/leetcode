/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 /* Path Sum.Given a binary tree and an integer, checking if there is a path from root to leaf whose the sum of nodes' valuse 
    is that integer. Because the node's value can be negative integer, I used recursive method to find every path from root to leaf
    checkink if there exsist a path satisfied the question. */
 
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(root == nullptr){
            return false;
        }
        sum -= root->val;
        if(sum == 0 && root->right == nullptr && root->left == nullptr){
            return true;
        }
        else{
            return hasPathSum(root->left,sum) || hasPathSum(root->right,sum);
        }
    }
};
