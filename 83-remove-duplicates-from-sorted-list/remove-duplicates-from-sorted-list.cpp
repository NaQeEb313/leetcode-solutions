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

       ListNode* curr=head;
        
        ListNode* next=NULL;

        if(head==NULL) return head;

        while(curr->next!=NULL)
        {   
            
            
            next=curr->next;
            if(curr->val == next->val)
            {
                curr->next=next->next;
                
                delete next;
                next=curr->next;
            }
                

           else if(curr->val != next->val)
            {
                curr=curr->next;
                next=curr->next;
            }
            

        }
        
        return head;
    }
};