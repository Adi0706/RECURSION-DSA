#include<iostream>
using namespace std;
int fibonacci (int n)
{
    if(n==0) return 0 ;
    if(n==1) return 1 ; 

 int ans  = fibonacci(n-1) + fibonacci(n-2) ;
 return ans ; 
}

int main()
{
    int n ; 
    cout<<"find th n th fibonacci number"<< endl ; 
    cin >> n ; 
    int result = fibonacci(n) ; 
    cout <<"the nth fibonacci number is " <<result <<endl;
    return 0;
}