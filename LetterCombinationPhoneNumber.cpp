#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

void help(int i, string &s, vector<string> &ans, string &temp, unordered_map<char, string> &m)
{
    // if we have traversed all the elements
    if (i == s.size()) {
        ans.push_back(temp);
        return;
    }

    // we'll store all the strings in str
    string str = m[s[i]];

    // add the element and recursion will do the rest
    // we'll traverse to every element
    for (int j = 0; j < str.size(); j++) {
        temp.push_back(str[j]);
        help(i + 1, s, ans, temp, m);

        // backtrack to undo the process
        temp.pop_back();
    }
}

vector<string> letterCombinations(string digits)
{
    // if digits string is empty, return an empty vector
    if (digits.size() == 0) {
        return {};
    }

    unordered_map<char, string> m;
    // storing all the numbers and their corresponding letters in the map
    m['2'] = "abc";
    m['3'] = "def";
    m['4'] = "ghi";
    m['5'] = "jkl";
    m['6'] = "mno";
    m['7'] = "pqrs";
    m['8'] = "tuv";
    m['9'] = "wxyz";

    vector<string> ans;
    string temp;
    help(0, digits, ans, temp, m);
    return ans;
}

int main()
{
    string digits = "23";
    vector<string> result = letterCombinations(digits);

    cout << "Letter Combinations: ";
    for (const string& comb : result) {
        cout << comb << " ";
    }
    cout << endl;

    return 0;
}