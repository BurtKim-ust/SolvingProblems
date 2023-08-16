class Solution {
public:
    string intToRoman(int num) {
        int numCopied=num;
        int quotients[7];
        string result="";
        int values[7]={1,5,10,50,100,500,1000};
        char signs[7]={'I','V','X','L','C','D','M'};
            
        for(int i=6;i>=0;i--){
            int quotient = numCopied/values[i];
            quotients[i]=quotient;
            numCopied-=quotient*values[i];
        }
        
        //adding letters to result
        for(int i=6;i>=0; i--){
            //considering when to use subtraction
            if(i==5&&quotients[4]==4){
                if(quotients[5]==1){
                    result+="CM";
                    
                }else{
                    result+="CD";
                }
                quotients[4]-=4;
            }else if(i==3&&quotients[2]==4){
                if(quotients[3]==1){
                    result+="XC";
                }else{
                    result+="XL";
                    
                }
                quotients[2]-=4;
            }else if(i==1&&quotients[0]==4){
                if(quotients[1]==1){
                    result+="IX";
                }else{
                    result+="IV";
                    
                }
                quotients[0]-=4;
            }else{
                for (int j=quotients[i];j>0;j--){
                    result+=signs[i];
                }
            }
        }
        return result;
    }
};