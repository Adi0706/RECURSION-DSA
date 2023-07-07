#include<iostream>
#include<vector>
using namespace std;

void subset(vector<int>&nums , vector<int>&output, int index, vector<int> &ans)
{
    //if we reach the end of the array an Unique subset is generated 
    if( index>=nums.size() )
    {
         ans.push_back(output);
        return ; 
    }
    else {
        output.push_back(nums[index]) ; // we ll include the element at index
        subset(nums,output,ans,index+1); //recursion will do the rest of the branching and make the subsets 
        output.pop_back(); // backtrack to get back the original string for generating new subsets 

        while(index+1 < nums.size() && nums[index] == nums[index+1] ) // while the elements at the index are same we ll skip those
        {
            index++;
        }

subset(nums,output,ans,index+1); // dont consider the element and ask recursion to print the unique subsets .
    }

}

int main()
{
return 0;
}