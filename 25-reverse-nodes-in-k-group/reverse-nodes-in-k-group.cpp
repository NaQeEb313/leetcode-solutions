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
    ListNode *solve(ListNode* head, int k)
    {
        if(head==NULL) return head;

        ListNode*curr=head;
        ListNode*temp=head;
        ListNode*prev=NULL;
        ListNode*next=NULL;

        
    int i=0;

        while(i<k && temp!=NULL)
        {
            temp=temp->next;
            i++;
        }
        if(i<k) return head;

        i=0;
        while(i<k && curr!=NULL)
        {
            i++;
            next=curr->next;
            
            curr->next=prev;
            prev=curr;
            curr=next;
            
        }

        if(curr!=NULL)
        {
            head->next= solve(curr,k);
        }

        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {

 return solve(head,k);
        
        
    }
};