class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;

        for(int i = 0; i < strs.size(); i++){
            string count(26, 0);
            for(auto&c : strs[i]){
                count[c - 'a']++;
            }
            m[count].push_back(strs[i]);
        }

        vector<vector<string>> res;
        for(auto& i : m){
            res.push_back(std::move(i.second));
        }

        return res;
    }
};
