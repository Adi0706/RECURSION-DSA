//unique permutations 
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

void help (int pos , vector<vector<int>> &ans ,vector<int> &nums , int n)
{
    //base condition
    if(pos >= n)
    {
        ans.push_back(nums) ; 
        return ;
    }
    //unordered set for to keep a check of duplicate elements 
    unordered_set<int> set ;
    //iterate through every element in the set ; 
    for(int i = pos ; i < n ; i++)
    {
        // if we have encountered the element before we skip the iteration
        if(set.find(nums[i])!=set.end()) continue ;
            set.insert(nums[i]) ; // insert nums[i] so no duplicate is created...

            swap(nums[pos],nums[i]) ; 

            help(pos+1,ans,nums,n) ; 


            //backtrack
            swap(nums[pos],nums[i]) ; 


        
    }
}

vector<vector<int>> Permutations(vector<int> nums)
{
    vector<vector<int>> ans  ; 
    help(0,ans , nums,nums.size()) ;
    return ans ; 

}


int main()
{
    vector<int> nums{1,1,2} ; 

    vector<vector<int>> result = Permutations(nums) ; 

    for(int i = 0 ; i < nums.size() ; i ++)
    {
        cout<<"[" ;
        for(int j = 0 ; j < nums.size(); j++)
        {

        
       std::cout<<result[i][j]<<endl;
    }
    cout<<"]";
    }
    return 0;
}