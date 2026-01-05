class Solution {
public:
    vector<string> chara = {
        "", "", "abc", "def", "ghi",
        "jkl", "mno", "pqrs", "tuv", "wxyz"
    };

    void soln(string digits, vector<string>& ans, int i, string output)
    {
        if (i == digits.length())
        {
            ans.push_back(output);
            return;
        }

        int digit = digits[i] - '0';

        for (int j = 0; j < chara[digit].length(); j++)
        {
            output.push_back(chara[digit][j]);
            soln(digits, ans, i + 1, output);
            output.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if (digits.length() == 0) return ans;

        string output;
        soln(digits, ans, 0, output);
        return ans;
    }
};
