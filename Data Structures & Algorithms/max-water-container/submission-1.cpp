class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;

        int volume = 0;
        int most = 0;

        while(left < right){
            int height = min(heights[left], heights[right]);
            int width = right - left;

            volume = height * width;
            most = max(most, volume);

            if(heights[left] < heights[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return most;
    }
};
