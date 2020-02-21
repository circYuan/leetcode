/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 /* Convert Sorted Array to Binary Search Tree.I use recursive method,begining with the middle of the array, and like binary search algo 
    , to create the balanced binary search tree. */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return insert(nums,0,nums.size()-1);
    }
    TreeNode * insert(vector<int> & nums,int l,int r){
        if(l > r){
            return nullptr;
        }
        else{
            int mid = (l + r) / 2;
            TreeNode * root = new TreeNode(nums[mid]);
            root -> val = nums[mid];
            root -> left = insert(nums,l,mid - 1);
            root -> right = insert(nums,mid + 1,r);
            return root;
        }
    }
};
