class Solution {
public:
    void compliment(int &n)
    {
        if(n==1)
        {
            n=0;
        }
        else if(n==0)
        {
            n=1;
        }
    }
    vector<int>binary;
    int findComplement(int num) {
        int n=0;
        while(num>0)
            {
                binary.push_back(num%2);
                num=num/2;
            }

        for(auto &x:binary)
            {
                compliment(x);
            }

        for(int i=0;i<binary.size();i++)
            {
                n=n+(binary[i]*pow(2,i));
            }
        return n;
    }
};