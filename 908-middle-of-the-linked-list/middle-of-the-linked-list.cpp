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
    ListNode* middleNode(ListNode* head) {
        ListNode*temp=new ListNode;
        temp=head;
        int count=0;

        while(temp->next!=NULL) 
            {
                count++;
                temp=temp->next;
            }

       if(count&1) count=(((count+1)>>1));

        else count=(count>>1);

        temp=head;

        for(int i=1;i<=count;i++)
            {
                temp=temp->next;
            }
            head=temp;

        return head;
            
        
    }
}; 