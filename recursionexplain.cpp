#include<iostream>
using namespace std ; 
void reachhome(int src , int destination)
{
    cout<<"source"<<" "<<src<<" "<<"destination" <<destination<<endl;
    if(src==destination)
    {
        cout<<"you have reached"<<endl;
        return ; 
    }
    reachhome(src+1,destination) ; 
}
int main()
{
    int destination = 10 ; 
    int src = 1 ; 
    reachhome(src,destination) ; 
    return 0 ; 
} 