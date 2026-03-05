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
    ListNode* reverseList(ListNode* head) {
        ListNode*reverse=NULL,*temp;
        temp=head;
       

        while(temp!=NULL)
        {
            push_front(reverse,temp->val);
            temp=temp->next;
        }

        head=reverse;
        return head;
        
    }
    void push_front(ListNode*&head,int value)
    {
        ListNode*Node=new ListNode;
        Node->val=value;
        Node->next=head;
        head=Node;

    }
};