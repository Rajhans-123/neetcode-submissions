class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res;
        for(int i = 0; i <= n; i++){
            int count = 0;
            int current = i;
            while(current > 0){
                current = current & (current - 1);
                count++;
            }
            res.push_back(count);
        }
        return res;
    }
};
