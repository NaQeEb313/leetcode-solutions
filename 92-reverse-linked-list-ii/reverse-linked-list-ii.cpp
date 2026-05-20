class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        ListNode *curr=head;
        ListNode *prev=NULL;
        ListNode *next=NULL;

        ListNode *leftn=NULL;
        ListNode *rightn=NULL;

        int count=1;

        while(count < left-1)
        {
            curr=curr->next;
            count++;
        }

        if(left==1)
            leftn=NULL;
        else
            leftn=curr;

        while(count<=right)
        {
            curr=curr->next;
            count++;
        }

        rightn=curr;

        prev=rightn;

        if(!leftn)
            curr=head;
        else
            curr=leftn->next;

        while(curr!=rightn)
        {
            next=curr->next;

            curr->next=prev;

            prev=curr;

            curr=next;
        }

        if(!leftn)
            return prev;

        leftn->next=prev;

        return head;
    }
};