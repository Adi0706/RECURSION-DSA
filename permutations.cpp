#include<iostream>
using namespace std;

void permutations(string input,int index)
{
    if(index>=input.length()){
        cout<<input<<endl;
        return ;
    }
    for(int i=index;i<input.length();i++)
    {
        swap(input[index],input[i]) ; 
        permutations(input,index+1);
        //backtrack

        swap(input[index],input[i]);
    }

}


int main()
{

    cout<<"enter string"<<endl;
    string str ;
    cin>>str;

    permutations(str,0) ;
return 0;
}