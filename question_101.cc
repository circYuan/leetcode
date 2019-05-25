/**
 * Q : Justify if a tree is symetric tree.
 * Method : change every left and right nodes of root's left subtree , then compare if 
 *          the root's left subtree is same as right subtree. 
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
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr){
            return true;
        }
        if(root->left != nullptr)
            trans(root->left);
        return compare(root->left,root->right);
    }
    void trans(TreeNode * head){
        if(head->left != nullptr){
            trans(head->left);
        }
        if(head->right != nullptr){
            trans(head->right);
        }
        TreeNode * tmp = head->left;
        head->left = head->right;
        head->right = tmp;
        tmp = nullptr;
    }
    bool compare(TreeNode * left,TreeNode * right){
        if(left == nullptr && right != nullptr || (left != nullptr && right == nullptr)){
            return false;
        }
        else if(left == nullptr && right == nullptr){
            return true;
        }
        else if(left->val != right->val){
            return false;
        }
        else{
            return compare(left->left,right->left) && compare(left->right,right->right);
        }
    }
};
