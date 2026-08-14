class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;

        for(auto& s : strs){
            string count(26, 0);
            for(char c : s){
                count[c - 'a']++;
            }
            m[count].push_back(s);
        }

        vector<vector<string>> result;
        for(auto& s : m){
            result.push_back(std::move(s.second));
        }

        return result;
    }
};
