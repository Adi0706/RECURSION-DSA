#include<iostream>
using namespace std ; 
int countdistinct(long long stairs)
{
   if(stairs<0) return 0 ; 
   if(stairs==0) return 1 ;

   int ans = countdistinct(stairs-1) + countdistinct(stairs-2) ; 
    
    return ans ; 
}

int main ()
{
    long long stairs ;
    cout<<"how many stairs ?" <<endl ; 
    cin>>stairs ; 

    int result = countdistinct(stairs) ; 
    cout<<result <<endl;

    return 0 ;

}