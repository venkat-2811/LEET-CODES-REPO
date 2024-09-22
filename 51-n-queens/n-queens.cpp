class Solution {
public:
    vector<vector<string>> ans;
    vector<bool> col;
    vector<bool> dig;
    vector<bool> crdig;
    void backTrack(int n, int lvl, vector<string>& board) {
        if (lvl == n) {
            ans.emplace_back(board);
            return;
        }
        int toAdd = n - 1;
        for (int i = 0; i < n; i++) {
            if (!col[i] && !dig[lvl + i] && !crdig[lvl - i + toAdd]) {
                col[i] = dig[lvl + i] = crdig[lvl - i + toAdd] = true;
                board[lvl][i] = 'Q';
                backTrack(n, lvl + 1, board);
                board[lvl][i] = '.';
                col[i] = dig[lvl + i] = crdig[lvl - i + toAdd] = false;
            }
        }

    }
    vector<vector<string>> solveNQueens(int n) {
        if (n == 1)
            return {{"Q"}};
        if (n <= 3)
            return {};
        col = vector<bool> (n, false);
        dig = vector<bool> (2*n - 1, false);
        crdig = vector<bool> (2*n - 1, false);
        vector<string> board(n, string(n,'.'));

        backTrack(n, 0, board);
        return ans;
    }
};