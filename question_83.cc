/**************************
This problem is asked for solving the sorting linked list who contain the duplicate value,and you should delete them.
My idea is let cur ppointer continuously become next if the pointer value is same as pre pointer until cur -> value is not
same as pre.Then let pre->next = cur.
***************************/




/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr){
            return head;
        }
        ListNode * pre = head;
        ListNode * cur = head->next;
        while(cur != nullptr){
            while(pre->val == cur->val){
                cur = cur->next;
                if(cur == nullptr){
                    pre->next = cur;
                    return head;
                }
            }
            pre->next = cur;
            pre = cur;
            cur = cur->next;
        }
        return head;
    }
};
