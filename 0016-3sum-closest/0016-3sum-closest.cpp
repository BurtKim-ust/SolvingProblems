class Solution {
    private:
    int dif(int num, int target){
        int sub=target-num;
        if(sub<0){
            return -1*sub;
        }else{return sub;}
    }
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int closest=nums[0]+nums[1]+nums[2];
        int sum;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int left=i+1;
            int right=nums.size()-1;
            while(right>left){
                sum=nums[i]+nums[left]+nums[right];
                if(dif(closest, target)>dif(sum, target)){
                    closest = sum;
                }else if(dif(sum, target)==0){
                    return sum;
                }
                if(sum>target){
                    right--;
                }else{
                    left++;
                }
            }
            
            
        }
        return closest;
        
    }
};