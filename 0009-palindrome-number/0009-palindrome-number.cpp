class Solution {
public:
    bool isPalindrome(int x) {
        int xCopy=x;
        int y=0;
        if(x<0){
            return false;
        }
        while(xCopy>0){
            if(y>INT_MAX/10){
                return false;
            }
            y*=10;
            y+=xCopy%10;
            xCopy/=10;
            
        }
        return (x==y);
        
    }
};