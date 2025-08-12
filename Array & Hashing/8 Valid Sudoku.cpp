class Solution {    // 2 ms
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<int> r, c, g;
        for(int i = 0; i < 9; i++){
            r.clear();
            for(int j = 0; j < 9; j++){
                if(board[i][j]=='.') continue;
                if(r.count(board[i][j])) return false;
                r.insert(board[i][j]);
            }
        }
        for(int i = 0; i < 9; i++){
            c.clear();
            for(int j = 0; j < 9; j++){
                if(board[j][i]=='.') continue;
                if(c.count(board[j][i])) return false;
                c.insert(board[j][i]);
            }
        }
        for(int i = 0; i < 9; i+=3){
            for(int j = 0; j < 9; j+=3){
                g.clear();
                for(int k = i; k < i+3; k++){
                    for(int l = j; l < j+3; l++){
                        if(board[k][l] == '.') continue;
                        if(g.count(board[k][l])) return false;
                        g.insert(board[k][l]);
                    }
                }
            }
        }
        return true;
    }
};