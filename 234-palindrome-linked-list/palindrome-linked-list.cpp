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
    ListNode*mid(ListNode* head)
    {
        ListNode*slow=head;
        ListNode*fast=head;

        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }

        return slow;
    }
  
    bool isPalindrome(ListNode* head) {

        if(head==NULL) return true;

        else if(head->next==NULL) return true;

       

        else
        {

        ListNode*middle = mid(head);

        ListNode*curr=middle->next;
        ListNode*prev=NULL;
        ListNode*next=NULL;

        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;

        }
        middle->next=prev;

        curr =head;
        next = prev;

        while( next!=NULL)
        {
            if(curr->val != next->val) return false;
            curr=curr->next;
            next=next->next;

           
        }

        

        return true;
        }
    }
};