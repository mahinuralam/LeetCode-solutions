class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        for (int i = 0; i < board.size(); i++){
            for (int j = 0; j < board[0].size(); j++)
                if (wordDFS(board, i, j, word, 0)){
                    return true;
                }
        }
        return false;
    }
    
    bool wordDFS(vector<vector<char>>& board, int i, int j, string& word, int wIdx){
        if (wIdx == word.size()){
            return true;
        }
        if (i < 0 || i > board.size()-1 || j < 0 || j > board[0].size()-1
            || board[i][j] != word[wIdx] || board[i][j] == '*'){
            return false;      
        }
        
        char tmpChar = board[i][j];
        board[i][j] = '*';
        bool upRes = wordDFS(board, i-1, j, word, wIdx+1);
        bool rightRes = wordDFS(board, i, j+1, word, wIdx+1);
        bool downRes =  wordDFS(board, i+1, j, word, wIdx+1);
        bool leftRes = wordDFS(board, i, j-1, word, wIdx+1);
        board[i][j] =  tmpChar;
        
        return (upRes || rightRes || downRes || leftRes);
    }
};