#include<iostream>
#include<vector>
using namespace std;


bool isSafe(int row , int col , vector<vector<int>> &board , int n){
   int x = row ;
   int y = col ; 


}
void solve(int col,int n,vector<vector<int>>&board,vector<vector<int>>&ans){
    //pick 1 queen and rest recursion will do
    for(int row = 0 ; row < n ; row ++ ){
        if(isSafe()){
            //ifqueen placing is safe 
            board[row][col] = 1 ;
            solve(col+1,n,board,ans) ; 
// backtrack
            board[row][col] = 0 ;
        }
    }
}

vector<vector<int>> nqueen(int n){
    vector<vector<int>>board(0,vector<int>(0,n)) ; 
    vector<vector<int>> ans ; 
    solve() ; 
    return ans ; 

}
int main()
{
return 0;
}