class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> n;

        for(int i = 0; i < nums.size(); i++){
            int difference = target - nums[i];
            if(n.find(difference) != n.end()){
                return {n[difference], i};
            }
            n[nums[i]] = i;
        }   
        return {};
    }
};
