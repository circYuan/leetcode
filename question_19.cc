/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 /********************
 c++ using my method faster than 81%,memory less than 99%.
 Construct a vector<ListNode * >,then putting all the node in it;
 and find the reverse index of n, n = length - n(you don't plus 1 because number 1 in array is [0]);
 and you can do this : list[re_index - 1]->next = list[re_index]->next;
 ********************/
 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == nullptr){
            return head;
        }
        ListNode * tmp = head;
        vector<ListNode *> list;
        while(tmp != nullptr){
            list.push_back(tmp);
            tmp = tmp->next;
        }
        int length = list.size();
        if(n == length){
            return head->next;
        }
        int rm = length - n;
        list[rm - 1]->next = list[rm]->next;
        return head;
    }
};
