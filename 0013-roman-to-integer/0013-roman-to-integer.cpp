#include <string>
class Solution {

public:
    int romanToInt(string s) {
        string copiedString=s;
        char characters[] = {'E','I', 'V', 'X', 'L' , 'C', 'D', 'M'};
        int values[]={0,1,5,10,50,100,500,1000};
        
        int result=0;
        for(int i=0;i<s.size();i++){
            if(i<s.size()-1&&copiedString[i]=='I'&&copiedString[i+1]=='V'){
                result+=4;
                copiedString.replace(i+1,1,"E");
                
            }else if(i<s.size()-1&&copiedString[i]=='I'&&copiedString[i+1]=='X'){
                result+=9;
                copiedString.replace(i+1,1,"E");
            }else if(i<s.size()-1&&copiedString[i]=='X'&&copiedString[i+1]=='L'){
                result+=40;
                copiedString.replace(i+1,1,"E");
            }else if(i<s.size()-1&&copiedString[i]=='X'&&copiedString[i+1]=='C'){
                result+=90;
                copiedString.replace(i+1,1,"E");
            }else if(i<s.size()-1&&copiedString[i]=='C'&&copiedString[i+1]=='D'){
                result+=400;
                copiedString.replace(i+1,1,"E");
            }else if(i<s.size()-1&&copiedString[i]=='C'&&copiedString[i+1]=='M'){
                result+=900;
                copiedString.replace(i+1,1,"E");
            }else{
                for(int j=0;j<sizeof(characters)/ sizeof(characters[0]);j++){
                if(copiedString[i]==characters[j]){
                    result+=values[j];
                    break;
                }
            }
            }
            
            
            
        }
        return result;
    }
};