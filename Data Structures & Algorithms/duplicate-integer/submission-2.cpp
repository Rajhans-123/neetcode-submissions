class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> repetition;
        for(int i = 0; i < nums.size(); i++){
            if(!(repetition.insert(nums[i]).second)){
                return true;
            }
        }
        return false;
    }
};