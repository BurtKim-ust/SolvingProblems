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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(0);
        ListNode* tail = dummyHead;

        int plus = 0;
        
        while(l1!=nullptr||l2!=nullptr||plus!=0){
            int digit1 = l1? l1->val:0;
            int digit2 = l2? l2->val:0;
            
            int sum=digit1+digit2+plus;
            int digit=sum%10;
            plus=sum/10;

            ListNode* addingPart = new ListNode(digit);
            tail->next = addingPart;
            tail = tail->next;

            l1=l1? l1->next:nullptr;
            l2=l2? l2->next:nullptr;
        }

        return dummyHead->next;
    }
};