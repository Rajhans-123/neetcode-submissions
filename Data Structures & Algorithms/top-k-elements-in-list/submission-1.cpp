class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        for(int i : nums) freq[i]++;

        vector<std::pair<int, int>> vec(freq.begin(), freq.end());
        std::sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
            return a.second > b.second;
        });

        vector<int> result;
        int j = 0;
        for(auto& i : vec){
            if(j == k) break;
            result.push_back(i.first);
            j++;
        }

        return result;
    }
};
