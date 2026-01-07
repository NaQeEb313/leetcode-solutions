class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        
        while(head != nullptr) {
            v.push_back(head->val);
            head = head->next;
        }
        
        int s = 0, e = v.size() - 1;
        while(s < e) {
            if(v[s] != v[e]) return false;
            s++; e--;
        }
        return true;
    }
};
