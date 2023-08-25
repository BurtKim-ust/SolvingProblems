class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        set<vector<int>> set;
        vector<vector<int>> result;
        if(nums.size()<4){
            return result;
        }
        for(int i=0;i<nums.size()-3;i++){
            for(int j=i+1;j<nums.size()-2;j++){
                
                int left=j+1;
                int right=nums.size()-1;
                while(right>left){
                    long sum=(long)nums[i]+nums[j]+nums[left]+nums[right];
                    if(sum==(long)target){
                        set.insert({nums[i],nums[j],nums[left],nums[right]});
                    }
                    if(sum<(long)target){
                        left++;
                    }else{
                        right--;
                    }
                }
                
            }
        }
        
        //set->result
        for(auto value:set){
            result.push_back(value);
        }
        return result;
    }
};