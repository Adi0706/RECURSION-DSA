#include<iostream>
#include<vector>
using namespace std;

//n is the target sum we want 
void solve(int i , int k , int n ,vector<int> &subset , vector<vector<int>>&ans,int sum )
{


    // base conditions

  if(k<0) return ; //no elements  

    if(i == 10) return ; // exceeds the range of elements


//if all the elements have been traversed , and summation is equal to target then push the ans to subset. 
    if (k==0) {
        if(sum == n)
        {
            ans.push_back(subset) ; 
        }
        return ; 
    }

//  for example k= 2 
// i= 1 2 
// 1 
// k = 1 
// k-1 
//  k=9 

//  i = 1 2 3 4 5 6 7 8 9 --> k = 9
//   2 3 4 5 6 7 8 9-->k = 8 

//pick the element. 
subset.push_back(i) ;
solve(i+1,k-1,n,subset,ans,sum+i);
//backtracking
subset.pop_back() ;

// we wont pick the element.
solve(i+1,k,n,subset,ans,sum);




}


vector<vector<int>> combinationSum(int k , int n)
{
    vector<int> subset ; 
    vector<vector<int>> ans ; 
    int sum = 0 ;
    solve(1,k,n,subset,ans,sum) ; 

    return ans ; 

}



int main()
{
    int k =2 ;
    int n = 5 ;
   vector<vector<int>> res = combinationSum(k,n) ;
   for(int i = 0 ; i<res.size() ;i++)
   {
       cout<<"[";
       for(int j=0;j<res[i].size();j++){
           cout<<res[i][j];
           if(j!=res[i].size()-1){
               cout<<", ";
           }
       }
       cout<<"]"<<endl;
   }
    return 0 ; 


}
