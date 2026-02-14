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
    ListNode*temp=new ListNode;

    int count=0;
    temp=head;
    if(head->next==NULL && n==1) return NULL;

    else if(head->next==NULL && n!=1) return head;


    


    while(temp!=NULL)
    {
        count++;
        temp=temp->next;

    }
    temp=head;
    for(int i=0;i<count-n-1;i++)
    {
        temp=temp->next;
    }

    if(n==count)
    head=head->next;

    else
    {

    ListNode*deletenode= new ListNode;

    deletenode=temp->next;

    temp->next=deletenode->next;

    delete deletenode;
    }

    return head;
    
    }
};