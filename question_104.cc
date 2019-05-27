/**
 * Question : Find the highest level of a tree
 * Method   : Using recursion
 **/


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root,int level = 0) {
        if(root != nullptr){
            level += 1;
            return max(maxDepth(root->left,level),maxDepth(root->right,level));
        }
        else{
            return level;
        }
    }
};
