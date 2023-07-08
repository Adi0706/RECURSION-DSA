#include <iostream>
#include <vector>
using namespace std;

// ONLY FUNCTIONS


//RAT IN A MAZE PROBLEM - A RAT IS AT A STARTING POSITION OF (0,0) ON A 2-D PLANE WITH DIMENSIONS (N,N).
//YOU HAVE TO PRINT ALL THE POSSIBLE PATHS TO REACH THE DESTINATION WHICH IS AT COORDINATE (N-1,N-1).
//YOU ON CAN ONLY MOVE IN LEXICOGRAPHIC ORDER - DOWN,LEFT,UP, RIGHT 
//STORE THE ANS IN A STRING AND PRINT IT .

//TIME COMPLEXTITY IS O(4^(n X n))---> since there are 4 ways to go for every box in the matrix 
//SPACE COMPLEXITY IS O(M x M )--> since there are 2 matrices arr and visited 

bool isSafe(int newx, int newy, vector<vector<int>> &arr, int n, vector<vector<bool>> &visited, string path)
{
    // FOR A SAFE MOVEMENT WE HAVE 3 CONDITIONS
    // the coordinates of the movements should be in the matrix
    // should nt be visited
    // it should have 1
    if ((newx >= 0 && newx < n) && (newy >= 0 && newy < n) && visited[newx][newy] != 1 && arr[newx][newy] != 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void solve(int x, int y, vector<vector<int>> &arr, int n, vector<string> &ans, vector<vector<bool>> &visited, string path)
{
    // base case
    // when destination is reached
    if (x == n - 1 && y == n - 1)
    {
        ans.push_back(path);
        return;
    }

    // MOVEMENTS IN LEXICOGRAPHIC ORDER - (D , L ,R ,U)
    // down
    if (isSafe(x + 1, y, arr, n, visited, path))
    {
        visited[x][y] = 1;
        solve(x + 1, y, arr, n, ans, visited, path);
        visited[x][y] = 0; // backtrack
    }
    // left
    if (isSafe(x, y - 1, arr, n, visited, path))
    {
        visited[x][y] = 1;
        solve(x, y - 1, arr, n, ans, visited, path);
        visited[x][y] = 0; // backtrack
    }
    // right
    if (isSafe(x, y + 1, arr, n, visited, path))
    {
        visited[x][y] = 1;
        solve(x, y + 1, arr, n, ans, visited, path);
        visited[x][y] = 0; // backtrack
    }
    // up
    if (isSafe(x - 1, y, arr, n, visited, path))
    {
        visited[x][y] = 1;
        solve(x - 1, y, arr, n, ans, visited, path);
        visited[x][y] = 0; // backtrack
    }
}

vector<string> searchMaze(vector<vector<int>> &arr, int n)
{
    vector<string> ans;
    vector<vector<bool>> visited(n, vector<bool>(n, 0)); // VISITED ARRAY IS USED SO THAT WE DONT END UP GOING TO THE SAME PATH AGAIN AND AGAIN , EVENTUALLY 
    // STUCK IN AN INFINITE LOOP.
    string path = "";
    if (arr[0][0] == 0) // if the starting position is 0 then return from there.
        return;
    solve(0, 0, arr, n, ans, visited, path);
    return ans;
}
