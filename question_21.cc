/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 /*********************
 Different from C,I using vector to store the new list then creat a new ListNode and copy from vector.O(n) faster than 80%
 *********************/
 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        vector<int> merge;
        ListNode * t1 = l1;
        ListNode * t2 = l2;
        while(t1 != nullptr || t2 != nullptr){
            if(t1 == nullptr){
                while(t2 != nullptr){
                    merge.push_back(t2->val);
                    t2 = t2->next;
                }
            }
            else if(t2 == nullptr){
                while(t1 != nullptr){
                    merge.push_back(t1->val);
                    t1 = t1->next;
                }
            }
            else{
                if(t1->val < t2->val){
                    merge.push_back(t1->val);
                    t1 = t1->next;
                }
                else{
                    merge.push_back(t2->val);
                    t2 = t2->next;
                }
            }
        }
        ListNode * head = nullptr;
        for(auto iter = merge.rbegin();iter != merge.rend();++iter){
            insert(&head,*iter);
        }
        return head;
        
    }
    void insert(ListNode ** root,int val){
        ListNode * newnode = new ListNode(0);
        newnode->val = val;
        newnode->next = nullptr;
        if(*root == nullptr){
            *root = newnode;
        }
        else{
            newnode->next = *root;
            *root = newnode;
        }
    }
};
