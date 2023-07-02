#include<iostream>
using namespace std;

void counting(int n)
{
    //base case
    if ( n == 0 ) return ;
    //RR 
    cout<<n<<" "; // preprocessing
     counting(n-1) ;
   //if we interchange the preprocessing n RR we ll get counting from 1 onwards 
}

int main()
{
    int n ;
    cout<<"Enter the number whose counting you wanna print:";
    cin >> n ;

     counting(n) ; 
  

    
return 0;
}