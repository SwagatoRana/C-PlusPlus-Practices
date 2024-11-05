#include<iostream>
#include<vector>
using namespace std;
bool isValid(vector<vector<char>>& board, int i, int j, char c){
    for(int x = 0; x < 9; x++){
        if(board[i][x] == c){
            return false;
        }
        if(board[x][j] == c){
            return false;
        }
    }
    int a = 3 * (i / 3);
    int b = 3 * (j / 3);
    for(int x = a; x < a + 3; x++){
        for(int y = b; y < b + 3; y++){
            if(board[x][y] == c){
                return false;
            }
        }
    }
    return true;
}
bool sudokuSolve(vector<vector<char>>& board, int i, int j){
    if(board[i][j] != '.'){
        if(i == 8 && j == 8){
            return true;
        }
        else if(j == 8){
            if(sudokuSolve(board, i + 1, 0)){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            if(sudokuSolve(board, i, j + 1)){
                return true;
            }
            else{
                return false;
            }
        }
    }
    for(char c = '1'; c <= '9'; c++){
        if(isValid(board, i, j, c)){
            board[i][j] = c;
            if(i == 8 && j == 8){
                return true;
            }
            else if(j == 8){
                if(sudokuSolve(board, i + 1, 0)){
                    return true;
                }
                else{
                    if(c == '9'){
                        board[i][j] = '.';
                        return false;
                    }
                    else{
                        continue;
                    }
                }
            }
            else{
                if(sudokuSolve(board, i, j + 1)){
                    return true;
                }
                else{
                    if(c == '9'){
                        board[i][j] = '.';
                        return false;
                    }
                    else{
                        continue;
                    }
                }
            }
        }
        else{
            if(c != '9'){
                continue;
            }
            else{
                board[i][j] = '.';
                return false;
            }
        }
    }
    return true;
}
int main(){
    vector<vector<char>> board = {
    {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
    {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
    {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
    {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
    {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
    {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
    {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
    {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
    {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };
    bool a = sudokuSolve(board, 0, 0);
    if(a){
        cout<<"The solved sudoku is: \n";
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                cout<<board[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"The sudoku is wrong!";
    } 
    return 0;
}