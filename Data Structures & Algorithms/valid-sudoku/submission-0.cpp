class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       bool rows[9][9] = {false} , cols[9][9] = {false} , boxes[9][9] = {false};
       for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j] != '.'){
                    int boxindex=(i/3)*3+(j/3);
                    int num = board[i][j] - '1';
                    if(rows[i][num] || cols[j][num] || boxes[boxindex][num]){
                        return false;
                    }
                    rows[i][num] = cols[j][num] = boxes[boxindex][num] = true;
                }
            }
       }
       return true;
    }
};
