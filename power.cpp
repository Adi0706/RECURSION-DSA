#include<iostream>
using namespace std;
int power(int n)
{
    //base case
    if(n==0) return 1 ;
    //recurence relation
    int small=power(n-1);
    int bigger = 2 * small ; //  return n * power(n-1) ;

    return bigger ; 

     
}
int main()
{
    
 int n ;
    cout<<"Enter the number whose 2th power you wanna find:";
    cin >> n ;

    int ans = power(n) ; 
    cout<<ans <<endl;

    return 0 ; 
}
