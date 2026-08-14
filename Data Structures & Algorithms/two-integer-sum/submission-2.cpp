class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> n;
        for(int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];
            if(n.find(diff) != n.end()){
                return {n[diff], i};
            }
            n[nums[i]] = i;
        }
        return {};
    }
};