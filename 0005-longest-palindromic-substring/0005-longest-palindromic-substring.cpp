class Solution {
    private:
        bool check(string &s, int i, int j){
            while(i<j){
                if(s[j]!=s[i]){
                    return false;
                }
                i++;
                j--;
            }
            return true;
        }
    public:
        string longestPalindrome(string s) {
            int length=s.size();
            int maxLength=0;
            int startingIndex=0;
            for(int i=0;i<length;i++){
                for(int j=i;j<length;j++){
                    if(check(s,i,j)){
                        maxLength=max(maxLength,j-i+1);
                        if(maxLength==j-i+1){
                            startingIndex=i;
                        }
                    }
                }
            }
            return s.substr(startingIndex, maxLength);

        }
};