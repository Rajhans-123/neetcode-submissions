class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        if(numbers.size() == 0) return {};

        int left = 0;
        int right = numbers.size() - 1;

        while(left < right){
            long long current_sum = static_cast<long long>(numbers[left]) + numbers[right];

            if(current_sum == target){
                return {left+1, right+1};
            }
            else if(current_sum < target){
                left++;
            }
            else{
                right--;
            }
        }

        return {};
    }
};
