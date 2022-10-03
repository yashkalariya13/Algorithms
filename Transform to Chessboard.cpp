class Solution {
public:

    int movesToChessboard(vector<vector<int>>& board) {
        int N = board.size();
        int colMovesNeeded = 0, rowMovesNeeded = 0;
        int onesInFirstCol = 0, onesInFirstRow = 0;
        int zerosInFirstCol = 0, zerosInFirstRow = 0;

        for (int i=1; i<board.size(); i++) {
            for (int j=1; j<board[i].size(); j++) {
                if (((board[0][0] ^ board[i][0]) ^ (board[i][j] ^ board[0][j])) == 1) {
                    return -1;
                }
            }
        }
        
        for (int i=0; i<N; i++) {
            if (board[0][i]) onesInFirstRow++;
            else zerosInFirstRow++;
            
            if (board[i][0]) onesInFirstCol++;
            else zerosInFirstCol++;
        }
        
        if (abs(onesInFirstRow - zerosInFirstRow) > 1) return -1;
        if (abs(onesInFirstCol - zerosInFirstCol) > 1) return -1;
        
        for (int i=0; i<N; i++) {
            if (board[0][i] == i%2) rowMovesNeeded++;
            if (board[i][0] == i%2) colMovesNeeded++;
        }    
        
        
        if (N % 2 == 1) {
            
            if (onesInFirstCol < zerosInFirstCol) {
                colMovesNeeded = N - colMovesNeeded;
            }
            
            if (onesInFirstRow < zerosInFirstRow) {
                rowMovesNeeded = N - rowMovesNeeded;
            }
            
        } else {
            colMovesNeeded = min(colMovesNeeded, N-colMovesNeeded);
            rowMovesNeeded = min(rowMovesNeeded, N-rowMovesNeeded);
        }
        

        
        return (colMovesNeeded + rowMovesNeeded) / 2;
    }
};
