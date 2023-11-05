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
    ListNode* middleNode(ListNode* head) {
        int c = 1;
        ListNode* temp = head;
        ListNode* new_node = head;
        while(temp->next != NULL){
            temp = temp->next;
            c++;
        }
        
        int mid = (c/2);
        mid++;
        c = 1;
        while(c!=mid){
            new_node = new_node->next;
              c++;
        }
        return new_node;
    }
};