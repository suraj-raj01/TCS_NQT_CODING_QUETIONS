// Valid Parentheses
// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

#include<iostream>
#include<stack>
using namespace std;

bool isValid(string s){
    stack<char> st;
    for(char ch:s){
        if(ch=='(' || ch=='{' || ch=='['){
            st.push(ch);
        }else{
            if(st.empty()){
                return false;
            }
            char top = st.top();
            if((ch==')' && top!='(') || (ch=='}' && top!='{') || (ch==']' && top!='[')){
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}

int main(){
    string s;
    cout<<"Enter string : ";
    cin>>s;
    if(isValid(s)){
        cout<<"Valid";
    }else{
        cout<<"Not Valid";
    }
    return 0;
}