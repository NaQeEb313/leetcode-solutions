class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        int count = 0;
        ListNode* temp = head;

    
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }

        ListNode* first = head;
        ListNode* second = head;

        
        for (int i = 1; i < k; i++) {
            first = first->next;
        }

        
        for (int i = 1; i < count - k + 1; i++) {
            second = second->next;
        }

        
        int tempVal = first->val;
        first->val = second->val;
        second->val = tempVal;

        return head;
    }
};