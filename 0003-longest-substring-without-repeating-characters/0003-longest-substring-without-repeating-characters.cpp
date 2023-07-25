class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int m=0;//max length
        int left =0;
        unordered_set<char> charSet;
        for(int i=0;i<n;i++){
            if(charSet.count(s[i])==0){
                charSet.insert(s[i]);
                m=max(m, i-left+1);
            }else{
                while(charSet.count(s[i])){
                    charSet.erase(s[left]);
                    left++;
                }
                charSet.insert(s[i]);
            }
        }

        return m;
    }
};