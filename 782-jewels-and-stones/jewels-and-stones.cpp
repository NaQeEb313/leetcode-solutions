class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        vector<char>jew;
        vector<int>freq(59,0);
        
        int n=stones.size();
        for(auto x:stones)
        {
            freq[x-'A']++;
        }
        int count=0;
        for(auto x:jewels)
        {
            jew.push_back(x);
            count=count+freq[x-'A'];

        }
        return count;

        
    }
};