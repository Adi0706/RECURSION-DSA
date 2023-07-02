//RECURSION-FACTORIAL PROBLEM
#include<iostream>
using namespace std ; 
int factorial(int n ){
    if(n == 0)
    return 1 ;
//since recursion is solving bigger problems with the help of smaller problems , the recurence relation can be big = n * small 
//here small = factorial(n-1)

int small = factorial(n-1);
int big = n * small ; 

return big ; // OR return n * factorial(n-1) ; 
    
}


int main()
{
    int n ;
    cout<<"Enter the number whose factorial you wanna find:";
    cin >> n ;

    int ans = factorial(n) ; 
    cout<<ans ;

    return 0 ; 
}