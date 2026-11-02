class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> count;
        int left = 0;
        int max_len = 0;

        for(int i = 0; i < s.size(); i++){
            if(count.find(s[i]) != count.end() && count[s[i]] >= left){
                left = count[s[i]] + 1;
            }
            
            count[s[i]] = i;
            max_len = max(max_len, i - left + 1);
        }
        return max_len;
    }
};
