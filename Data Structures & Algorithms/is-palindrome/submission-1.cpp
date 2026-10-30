class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length() == 0) return false;
        
        string t;
        for(int i = 0; i < s.length(); i++){
            if(isalnum(s[i])){
                t += tolower(s[i]);
            }
        }
        
        int left = 0;
        int right = t.length() - 1;

        while(left <= right){
            if(t[left] != t[right]){
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};