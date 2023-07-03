//{a,b,c}-generate all the subsequences of the string
//question similar to power set . where we go to everyindex and on the first branch we include and on the second branch we exclude
//number of strings at the output is 2^n .

#include<iostream>
#include <string>
using namespace std;

void printsubsequence (string str, int strindex , string outputstr)
{
    //BASE CASE
    if(strindex == str.length())
    {
        cout<<outputstr<<endl ;
        return ;
    }

    //exluding the character at index
    printsubsequence(str,strindex+1,outputstr) ; 

    //including the character at index 
outputstr.push_back(str[strindex]) ; 
printsubsequence(str,strindex+1,outputstr) ;

}

int main()
{
    string str = "abc";
    int strindex = 0 ; 
    string output = " " ; 

cout<<"the subsequences are:"<<endl;
    printsubsequence(str,strindex,output) ; 
return 0;
}