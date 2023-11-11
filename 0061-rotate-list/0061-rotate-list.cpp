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
    ListNode* rotateRight(ListNode* head, int k) {
        // compute
        int len = 1;
        if(head == NULL){
            return NULL;
        }
        ListNode* temp = head;
        ListNode* temp1 = head;
        while(temp->next!=NULL){
            len ++;
            temp = temp -> next;
        }
        if(k>=len){
            k = k%len;
        }
        
        k = len - k;
        
        temp->next = head;
        int c = 1;
        while(c!=k){
            temp1 = temp1->next;
            c++;
        }
        head = temp1->next;
        temp1->next = NULL;
        return head;
    }
};