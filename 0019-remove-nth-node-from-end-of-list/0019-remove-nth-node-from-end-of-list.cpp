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
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* start = new ListNode();
        start->next = head;
        ListNode* fastPtr = start;
        ListNode* slowPtr = start;
        
        for(int i = 1; i<=n; i++){
            fastPtr = fastPtr->next;
        }
        
        while(fastPtr->next != NULL){
            fastPtr = fastPtr->next;
            slowPtr = slowPtr->next;
        }
        
        slowPtr->next = slowPtr->next->next;
        
        return start->next;
    }
};