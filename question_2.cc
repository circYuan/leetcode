/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 
 // trivial solution, It can be more readable use while( l1 != nullptr || l2 != nullptr), and check inside while if l2 is null or l1 is null.
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode * ans = new ListNode;
        ListNode * now = ans;
        ListNode * pre = nullptr;
        while(l1 != nullptr && l2 != nullptr){
            int add = (l1->val + l2->val + carry) % 10;
            carry = (l1->val + l2->val + carry) / 10;
            now->val = add;
            pre = now;
            now->next = new ListNode;
            now = now->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1 != nullptr){
            int add = (l1->val + carry) % 10;
            carry = (l1->val + carry) / 10;
            now->val = add;
            pre = now;
            now->next = new ListNode;
            now = now->next;
            l1 = l1->next;
        }
        while(l2 != nullptr){
            int add = (l2->val + carry) % 10;
            carry = (l2->val + carry) / 10;
            now->val = add;
            pre = now;
            now->next = new ListNode;
            now = now->next;
            l2 = l2->next;
        }
        if(carry > 0){
            now->val = carry;
        }
        else{
            pre->next = nullptr;
        }
        return ans;
    }
};
