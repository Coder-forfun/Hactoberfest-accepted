// # Problem Statement
// Write a program to solve a Sudoku puzzle by filling the empty cells.

// A sudoku solution must satisfy all of the following rules:

// Each of the digits 1-9 must occur exactly once in each row.
// Each of the digits 1-9 must occur exactly once in each column.
// Each of the digits 1-9 must occur exactly once in each of the 9 3x3 sub-boxes of the grid.
// The '.' character indicates empty cells.

 

// # Example 1:


// ## Input: 
// board = [<br>
//    ["5","3",".",".","7",".",".",".","."],<br>
//    ["6",".",".","1","9","5",".",".","."],<br>
//    [".","9","8",".",".",".",".","6","."],<br>
//    ["8",".",".",".","6",".",".",".","3"],<br>
//    ["4",".",".","8",".","3",".",".","1"],<br>
//    ["7",".",".",".","2",".",".",".","6"],<br>
//    [".","6",".",".",".",".","2","8","."],<br>
//    [".",".",".","4","1","9",".",".","5"],<br>
//    [".",".",".",".","8",".",".","7","9"]
//    <br>]
//    <br>
//    <br>

// ## Output: 
// board = 
// [<br>
//    ["5","3","4","6","7","8","9","1","2"],<br>
//    ["6","7","2","1","9","5","3","4","8"],<br>
//    ["1","9","8","3","4","2","5","6","7"],<br>
//    ["8","5","9","7","6","1","4","2","3"],<br>
//    ["4","2","6","8","5","3","7","9","1"],<br>
//    ["7","1","3","9","2","4","8","5","6"],<br>
//    ["9","6","1","5","3","7","2","8","4"],<br>
//    ["2","8","7","4","1","9","6","3","5"],<br>
//    ["3","4","5","2","8","6","1","7","9"]<br>
//    ]
//    <br>
//    <br>
//    <br>

// ## Explanation: 
// The input board is shown above and the only valid solution is shown below:

// ## Constraints:

// board.length == 9 <br>
// board[i].length == 9 <br>
// board[i][j] is a digit or '.'.<br>
// It is guaranteed that the input board has only one solution.




#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isItSafe(vector<vector<char>>& board , int n , int row , int col , char num){
        for(int pos=0;pos<n;pos++){
            if(board[row][pos]==num) return false;
            if(board[pos][col]==num) return false;
            if(board[(row/3)*3 + pos/3][(col/3)*3 + pos%3]==num) return false;
        }
        return true;
    }
    
    bool returnSolvedSuduko(vector<vector<char>>& board){
        int n = board.size();
        for(int row=0;row<n;row++){
            for(int col=0;col<n;col++){
                if(board[row][col]=='.'){
                    for(char num='1';num<='9';num++){
                        if(isItSafe(board,n,row,col,num)){
                            board[row][col]=num;
                            if(returnSolvedSuduko(board))
                                return true;
                            board[row][col]='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        returnSolvedSuduko(board);
        return;
    }
};

int main(){
   int n;
   cin>>n;
   vector<vector<int>> board(n,vector<int>(n));
   for(int i=0;i<n;i++){
      for(int j=0;j<n;j++)
         cin>>board[i][j];
   }
   solveSudoku(board);
   for(int i=0;i<n;i++){
      for(int j=0;j<n;j++)
         cout<<board[i][j]<<" ";
      cout<<endl;
   }
}