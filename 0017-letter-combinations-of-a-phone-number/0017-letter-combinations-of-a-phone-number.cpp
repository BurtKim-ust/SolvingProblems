class Solution {
    // Note to myself: do this again later
    // Important to understand how recusive works
private:
    void letterGenerate(string digits, vector<string> &res, string nums[], int i, string s){
        if(i==digits.length()){
            res.push_back(s);
            return;
        }
        string val=nums[digits[i]-'0'];
        for(int j=0;j<val.length();j++){
            letterGenerate(digits, res, nums,i+1,s+val[j]);
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(digits.length()==0)
            return res;
        string nums[10]={
            "","", "abc","def","ghi","jkl","mno","pqrs","tuv", "wxyz"
        };
        letterGenerate(digits, res, nums, 0, "");
        return res;
    }
};