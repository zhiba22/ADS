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

#include <iostream>
#include <string>
using namespace std;

string process(string s) {
    string result = "";
    for (char c : s) {
        if (c == '#') {
            if (!result.empty()) result.pop_back();
        } else {
            result.push_back(c);
        }
    }
    return result;
}

int main() {
    string a, b;
    cin >> a >> b;

    if (process(a) == process(b))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
