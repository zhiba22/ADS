/*
#include <iostream>
#include <stack>
using namespace std;

bool check(const string &s) {
    stack<char> st;
    for (char c : s) {
        if (c == '#'){
            st.pop(c); }     
        else if (c == ')') {            
            if (st.empty()) return false; 
            st.pop();                   
        }
    }
}

int main(){
    stack<string> st={};
    cin>>

}
    */