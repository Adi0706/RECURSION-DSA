#include<iostream>
#include<vector>
using namespace std;


bool isSafe(int row , int col , vector<vector<int>> &board , int n){
   int x = row ;
   int y = col ; 
   //check for same row 
   while(y>=0){
    if(board[x][y]==1){
        return false ; 
    }
    y -- ;
   }
   //check for upper diagonal 
   while(y>=0 && x>=0)
   {
    if(board[x][y]==1)
    {
        return false ; 
    }
    y-- ; 
    x -- ;
   }
   //check for lower diagonal 
   while(x<n && y>=0){
    if(board[x][y]==1)
    {
        return false ; 
    }
    x ++ ;
    y -- ;
   }
 return true ; 

}
void addSolution(vector<vector<int>> &board , vector<vector<int>> &ans , int n ){
    vector<int> temp ; 
    for(int i = 0 ; i< n ; i ++)
    {
        for(int j = 0 ; j< n ; j ++ )
        {
            temp.push_back(board[i][j]);
        }
    }
    ans.push_back(temp);
}
void solve(int col,int n,vector<vector<int>>&board,vector<vector<int>>&ans){
//base case 
//if all coloumns are filled 
if(col == n ){
    addSolution(board , ans , n) ; 
    return ;
}



    //pick 1 queen and rest recursion will do
    for(int row = 0 ; row < n ; row ++ ){
        if(isSafe(row,col,board,n)){
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
    solve(0,n,board,ans) ; 
    return ans ; 

}
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<vector<int>> solutions = nqueen(n);

    if (solutions.empty())
    {
        cout << "No solutions found." << endl;
    }
    else
    {
        cout << "Total solutions: " << solutions.size() << endl;
        for (const auto &solution : solutions)
        {
            cout << "Solution:" << endl;
            for (const auto &row : solution)
            {
                for (int i = 0; i < n; i++)
                {
                    if (i == row)
                        cout << "Q ";
                    else
                        cout << ". ";
                }
                cout << endl;
            }
            cout << endl;
        }
    }

    return 0;
}
