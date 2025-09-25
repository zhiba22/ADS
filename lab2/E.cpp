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