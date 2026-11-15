class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
         int max_from_right = -1; for (int i = arr.size() - 1; i >= 0; --i) { int current = arr[i]; arr[i] = max_from_right; max_from_right = max(max_from_right, current); } return arr;
    }
};