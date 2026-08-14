class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        map<char, int> s_map;
        map<char, int> t_map;

        for(char i : s){
            s_map[i]++;
        }

        for(char i : t){
            t_map[i]++;
        }

        int counter = 0;
        for(char i : s){
            if(s_map[i] == t_map[i]){
                counter++;
            }
        }

        if(counter == s.size() && counter == t.size()){
            return true;
        }
        
        return false;
    }
};
