class Solution {
public:
    vector<int> PrefixMax(vector<int>& arr){
        if(arr.empty()) return {};

        vector<int> prefixMax(arr.size());
        prefixMax[0] = arr[0];

        for(size_t i = 1; i < arr.size(); i++){
            prefixMax[i] = max(prefixMax[i - 1], arr[i]);
        }

        return prefixMax;
    }

    vector<int> SuffixMax(vector<int>& arr){
        if(arr.empty()) return {};

        int n = arr.size();
        vector<int> suffixMax(n);
        suffixMax[n - 1] = arr[n - 1];

        for(int i = n - 2; i >= 0; i--){
            suffixMax[i] = max(arr[i], suffixMax[i + 1]);
        }

        return suffixMax;
    }

    int trap(vector<int>& height) {
        vector<int> prefixMax = PrefixMax(height);
        vector<int> suffixMax = SuffixMax(height);

        int total_trapped_water = 0;
        for(size_t i = 0; i < height.size(); i++){
            total_trapped_water += min(prefixMax[i], suffixMax[i]) - height[i];
        }

        return total_trapped_water;
    }
};
