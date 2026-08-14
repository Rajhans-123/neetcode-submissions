class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;

        for(auto& s : strs){
            string sorted_s = s;
            std::sort(sorted_s.begin(), sorted_s.end());

            m[sorted_s].push_back(s);
        }

        vector<vector<string>> result;
        for(auto& s : m){
            result.push_back(std::move(s.second));
        }

        return result;
    }
};
