/*
#include <bits/stdc++.h>  
using namespace std;

struct Node{
 Node * prev;
 Node * next;
 string val;
 Node(string _val){
  prev = NULL;
  next = NULL;
  val = _val;
 } 
};

Node * head = NULL;
Node * tail = NULL;
int cnt;
void add_back(string s){

}
void add_front(string s){

}
bool empty(){

}
void erase_front(){

}
void erase_back(){

}
string front(){

}
string back(){

}
void clear(){

}
  
int main()
{
 string s;
    while(cin >> s){
     if(s == "add_front"){
      string t;
      cin >> t;
      add_front(t);
      cout << "ok" << endl;
     }
     if(s == "add_back"){
      string t;
      cin >> t;
      add_back(t);
      cout << "ok" << endl;
     }
     if(s == "erase_front"){
      if(empty()){
       cout << "error" << endl;
      }
      else
      {
       cout << front() << endl;
       erase_front();
      }
     }
     if(s == "erase_back"){
      if(empty()){
       cout << "error" << endl;
      }
      else{
       cout << back() << endl;
       erase_back();
      }
     }
     if(s == "front"){
      if(empty()){
       cout << "error" << endl;
      }
      else{
       cout << front() << endl;
      }
     }
     if(s == "back"){
      if(empty()){
       cout << "error" << endl;
      }
      else{
       cout << back() << endl;
      }
     }
     if(s == "clear"){
      clear();
      cout << "ok" << endl;
     }
     if(s == "exit"){
      cout << "goodbye" << endl;
      break;
     }
     // cout << "hi" << endl;
    }
    return 0;
} */

#include <iostream>
#include <list>
using namespace std;


int n;
string name;
list<string> names;
int main() {
  cin >> n;
  while(n--){
    cin >> name;
    if(!names.empty() && name == names.back()) continue;
    names.push_back(name);
  }
  cout << "All in all: " << names.size();
  cout << "\nStudents:\n";
  while(!names.empty()){
    cout << names.back() << '\n'; names.pop_back(); 
  }
}