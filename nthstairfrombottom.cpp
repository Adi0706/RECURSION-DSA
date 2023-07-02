//You are given a staircase , you need to find the total number of ways to reach the nth staircase from bottom 
//when youre only allowed to climb 1,2 or 3 stairs at a time.

#include<iostream>
using namespace std;
int numberofways(int n){
    if(n==0) return 1 ;
    if(n<0) return 0 ;
    
   return numberofways(n-1) + numberofways(n-2) + numberofways (n-3) ;  //RR
}

int main()
{
    int n ;
    cout<<"enter the size of stairs"<<endl; 
    cin>>n ; 

    int res = numberofways(n);
    cout<<"the totalnumber of ways are : "<<res<<endl ; 
return 0;
}