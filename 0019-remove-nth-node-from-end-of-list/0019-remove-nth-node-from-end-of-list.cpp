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
        ListNode *fast =head, *slow=head;
        //fast starts from n from the right.
        for(int i=0; i<n;i++){
            fast=fast->next;
        }
        //in case that n is greater than length of the listnode.
        if(fast ==nullptr){
            return head->next;
        }
        //slow and fast go for same speed
        while(fast->next !=nullptr){
            fast=fast->next;
            slow=slow->next;
        }
        //when fast reaches the end and cannot go anymore, slow->next is the one to be deleted
        slow->next=slow->next->next;
        return head;
        
        
        
    }
};