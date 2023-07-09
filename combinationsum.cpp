#include<iostream>
using namespace std;

//only functions

class Solution {
public:
void solve (int i,vector<int>&candidates , vector<int> &output,vector<vector<int>> &ans,int target, int sumtillnow){


// BASE CONDITIONS 
if(sumtillnow == target){
    ans.push_back(output) ;
    return ; 
}

if(sumtillnow > target) return ; 

if(i >= candidates.size()) return ; 


    //skip the ith element 
    solve(i+1,candidates,output,ans,target,sumtillnow) ; 

    // take the ith element
    sumtillnow = sumtillnow + candidates[i] ; 
    output.push_back(candidates[i]) ;
    solve(i,candidates,output,ans,target,sumtillnow);
    //BACKTRACKING
    sumtillnow = sumtillnow - candidates[i];
    output.pop_back();
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans ; 
        vector<int> output ;
        int sumtillnow = 0 ;
        solve(0,candidates,output,ans,target,sumtillnow);
        return ans ;
        
    }
};
int main()
{
return 0;
}