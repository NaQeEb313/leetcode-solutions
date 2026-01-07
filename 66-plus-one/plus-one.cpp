class Solution {
public:
    vector<int> plusOne(vector<int>& A) {
int n=A.size();
        int carry=1;
        
        for(int i=n-1;i>-1;i--)
            {
            A[i]=A[i]+carry;
                carry=A[i]/10;
                A[i]=A[i]%10;
                
            }
        if(carry>0)
        {
            A.insert(A.begin(),carry);
            
        }
        return A;
    }
};