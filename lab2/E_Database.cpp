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
/*#include <iostream>
using namespace std;

template <typename Type> struct Node {
public:
  Node<Type> *next;
  Node<Type> *prev;
  Type value;
  Node(Type value, Node<Type> *prev, Node<Type> *next)
      : value(value), prev(prev), next(next) {}
};
template <typename Type> class iter {
private:
  Node<Type> *current;

public:
  iter(Node<Type> *current) : current(current) {}

  iter<Type> operator++(int) {
    current = (*current).next;
    return *this;
  }
  iter<Type> operator--(int) {
    current = (*current).prev;
    return *this;
  }
  Type &operator*() { return (*current).value; }
  Node<Type> *get_pointer() const { return current; }
  void invalidate() { current = new Node<Type>(-1, nullptr, nullptr); }
};

template <typename Type> class list {
private:
  Node<Type> *head;
  Node<Type> *tail;
  size_t size;

public:
  list(size_t size = 0) : size(size), head(nullptr), tail(nullptr) {
    // this->push_back()
  }
  void erase(Node<Type> *node) {
    if (node == head)
      this->pop_front();
    else if (node == tail)
      this->pop_back();

    else {
      Node<Type> *prev = (*node).prev;
      Node<Type> *next = (*node).next;
      (*prev).next = next;
      (*next).prev = prev;
      size--;
      delete node;
    }
  }
  void erase(iter<Type> &it) {
    this->erase(it.get_pointer());
    // it.invalidate();
  }
  void push_back(Type value) {
    if (size == 0) {
      head = new Node<Type>(value, nullptr, nullptr);
      tail = head;
    } else {
      Node<Type> *temp = new Node<Type>(value, tail, nullptr);
      (*tail).next = temp;
      tail = temp;
    }
    size++;
  }
  void push_front(Type value) {
    if (size == 0) {
      this->push_back(value);
    } else {
      Node<Type> *temp = new Node<Type>(value, nullptr, head);
      (*head).prev = temp;
      head = temp;
    }
    size++;
  }

  void pop_back() {
    Node<Type> *temp = (*tail).prev;
    if (temp == nullptr){
      delete tail;
      tail = nullptr;
    }
    else {
      (*temp).next = nullptr;
      delete tail;
      tail = temp;
    }
    size--;
  }
  void pop_front() {
    Node<Type> *temp = (*head).next;
    if (temp == nullptr){
      delete head;
      head = nullptr;
    }
    else {
      (*temp).prev = nullptr;
      delete head;
      head = temp;
    }
    size--;
  }
  Type &back() const { return (*tail).value; }
  Type &front() const { return (*head).value; }
  iter<Type> begin() const { return iter<Type>(head); }
  size_t length() const { return this->size; }
  bool empty() const { return this->size == 0; }
};


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
  cout << "All in all: " << names.length();
  cout << "\nStudents:\n";
  while(!names.empty()){
    cout << names.back() << '\n'; names.pop_back(); 
  }
}*/