class Solution {
public:
    string convert(string s, int numRows) {
        int &n = numRows; //reference
        if(n<=1){
            return s;
        }
        vector<string> v(numRows, "");
        
        int dir=-1, j=0;
        
        for(int i=0; i<s.size();i++){
            if(j==n-1||j==0){
                dir*=-1;
            }
            v[j]+=s[i];
            if(dir==1){
                j++;
            }else{
                j--;
            }
            
        }
        string result;
        for(auto &it: v){
            result +=it;
        }
        return result;
    }
};