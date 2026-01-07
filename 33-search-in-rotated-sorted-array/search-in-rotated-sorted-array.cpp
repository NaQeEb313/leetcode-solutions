class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if(n == 0) return -1; 

        int s = 0, e = n - 1;
        while(s < e) {
            int m = (s + e) / 2;
            if(nums[m] > nums[e])
                s = m + 1;
            else
                e = m;
        }
        int pivot = s;

        
        s = 0, e = n - 1;
        if(target >= nums[pivot] && target <= nums[n-1]) s = pivot;
        else e = pivot - 1;

        
        while(s <= e) {
            int m = (s + e) / 2;
            if(nums[m] == target) return m;
            else if(nums[m] < target) s = m + 1;
            else e = m - 1;
        }

        return -1;
    }
};