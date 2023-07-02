#include<iostream>
using namespace std;
bool issorted(int arr[],int size)
{
     if(size==0||size ==1) return true ; 
     if(arr[0]> arr[1]) {
        return false ;
     } 
     else
     {
        bool answer = issorted(arr+1,size-1) ; 
          return answer ;  
}
     } 

   
int main()
{
int size = 5 ; 
int arr[5] = {2,4,6,8,90} ; 
cout<<issorted(arr,size) ;  

return 0;
}