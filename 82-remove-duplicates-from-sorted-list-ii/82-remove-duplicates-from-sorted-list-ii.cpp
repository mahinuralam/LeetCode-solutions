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
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* start = new ListNode();
        start->next = head;
        ListNode* pred = start;
        
        while(head!=NULL &&  head->next != NULL){
            if(head->val == head->next->val){
                while(head != NULL && head->next != NULL && head->val == head->next->val){
                    head = head->next;
                }
                pred->next = head->next;                
            }
            else {
                pred->next = head;
                pred = head;
            }
            head = head->next;
        }
        
        return start->next;
    }
};