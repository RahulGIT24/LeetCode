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
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL){
            return false;
        }
        
        ListNode* fastptr = head;
        ListNode* slowptr = head;
        while(fastptr -> next && fastptr->next->next){
            fastptr = fastptr->next->next;
            slowptr = slowptr->next;
            if(fastptr == slowptr){
                return true;
            }
        }
        return false;
    }
};