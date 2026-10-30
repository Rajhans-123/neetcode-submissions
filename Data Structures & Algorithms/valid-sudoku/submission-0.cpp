class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool is_valid = true;
        for(int i = 0; i < 9; i++){
            unordered_set<char> verify;
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.'){
                    continue;
                }
                if(!verify.insert(board[i][j]).second){
                    is_valid = false;
                }
            }
            verify.clear();
        }

        for(int i = 0; i < 9; i++){
            unordered_set<char> verify;
            for(int j = 0; j < 9; j++){
                if(board[j][i] == '.'){
                    continue;
                }
                if(!verify.insert(board[j][i]).second){
                    is_valid = false;
                }
            }
            verify.clear();
        }

        for (int box = 0; box < 9; box++) {
            unordered_set<char> verify;
            for (int i = (box / 3) * 3; i < (box / 3) * 3 + 3; i++) {
                for (int j = (box % 3) * 3; j < (box % 3) * 3 + 3; j++) {
                    if (board[i][j] == '.') {
                        continue;
                    }
                    if (!verify.insert(board[i][j]).second) {
                        is_valid = false;
                    }
                }
            }
        }
        return is_valid;
    }
};
