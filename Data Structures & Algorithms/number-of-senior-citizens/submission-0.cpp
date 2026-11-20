class Solution {
public:
    int countSeniors(vector<string>& details) {
        int seniorCount = 0;
        
        for (const string& p : details) {
            int age = (p[11] - '0') * 10 + (p[12] - '0');
            
            if (age > 60) {
                seniorCount++;
            }
        }
        
        return seniorCount;
    }
};