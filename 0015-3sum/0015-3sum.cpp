class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> set; //to avoid duplication
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 2; i++) {
            if(i>0&&nums[i]==nums[i-1]){
                continue; //speeding up the process a bit
            }
            int left=i+1;
            int right=nums.size()-1;
            while(right>left){
                if(nums[i]+nums[left]+nums[right]==0){
                    set.insert({nums[i],nums[left],nums[right]});
                    right--;
                    left++;
                }else if(nums[i]+nums[left]+nums[right]>0){
                    right--;
                }else{
                    left++;
                }
            }
        }
        for(auto value:set){
            result.push_back(value);
        }
        
        return result;
    }
};