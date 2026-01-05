class Solution {
public:
    void merge(vector<int>&nums1,int s,int e)
    {
        int m=s+((e-s)>>1),n1=nums1.size();
        int i=s,j=m+1;
        vector<int>temp;
        while(i<=m&&j<=e)
            {
                if(nums1[i]<=nums1[j])
                {
                    temp.push_back(nums1[i++]);
                }
                else
                {
                    temp.push_back(nums1[j++]);
                }
            }
                while(i<=m)
                    {
                        temp.push_back(nums1[i++]);
                    }
                while(j<=e)
                    {
                        temp.push_back(nums1[j++]);
                    }
        for(int k=0;k<temp.size();k++)
            {
                nums1[s+k]=temp[k];
            }
                
            
        
    
        
        
    }
    void mergesort(vector<int>&nums1,int s,int e)
    {
        if(s>=e)
        {
          return ;
        }
        int m=s+((e-s)>>1);
        mergesort(nums1,s,m);
        mergesort(nums1,m+1,e);
        merge(nums1,s,e);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);

        return nums;
    }
};