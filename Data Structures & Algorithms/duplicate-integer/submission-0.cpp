class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> repetition;
        for(int i = 0; i < nums.size(); i++){
            auto result = repetition.insert(nums[i]);
            if(!result.second){
                return true;
            }
        }
        return false;
    }
};