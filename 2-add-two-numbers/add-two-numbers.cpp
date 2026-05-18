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

 ListNode*curr1;
 

 ListNode*curr2;
 

 ListNode*ans=new ListNode();
 

int c=0;

    ListNode*add(int idx,ListNode*&ans)
    {
        int sum=0;

        if(curr1==NULL && curr2==NULL && !c) return ans;
         
         int d1=curr1?curr1->val:0;
         int d2=curr2?curr2->val:0;

         sum=d1+d2+c;
         ans->val=sum%10;
         sum=sum/10;
         c=sum%10;

        if(curr1) curr1=curr1->next;
        if(curr2) curr2=curr2->next;

        if(curr1 || curr2 || c)
        {
            ans->next=new ListNode();
            add(idx+1,ans->next);
        }
        return ans;

    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        curr1=l1;
        curr2=l2;
        return add(0,ans);
        
    }
};