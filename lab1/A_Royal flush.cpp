#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int card;
        cin >> card;

        int data[1000];
        int size = 0;  

        for (int j = card; j > 0; j--) {
            for (int i = size; i > 0; i--) {
                data[i] = data[i - 1];
            }
            data[0] = j;
            size++;

            for (int x = 0; x < j; x++) {
                int last = data[size - 1];

                for (int i = size - 1; i > 0; i--) {
                    data[i] = data[i - 1];
                }

                data[0] = last;
            }
        }

        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

/* #include <iostream>
using namespace std;

template<typename Type>
class vector{
  private:
    size_t sz;
    size_t capacity;
    Type* container;
  public:
    vector() : capacity(), sz(), container(nullptr) {}
    
    vector(size_t size) : capacity(size), sz(){
      container = new Type[size];
    }
  
    void emplace_back(Type value){
      container[sz++] = value;
    }
    Type& operator [](size_t index) const{
      return container[index];
    }
    size_t size() const {
      return this->sz;
    }
    void set_size(size_t size){ this->sz = size;}
    
};



template<typename T=int>
struct Node{
  T value;
  Node<T>* next;
  Node(T value, Node<T>* next){
    this->value = value;
    this->next = next;
  }
};

template<typename Type>
class queue{
  private:
    size_t size;
    Node<Type>* head;
    Node<Type>* tail;
  public:
    queue() : head(nullptr), tail(nullptr), size(){}
    void push(Type value){
      if(size == 0){
        head = new Node<Type>(value, nullptr);
        tail = head;
      } else {
        (*tail).next = new Node<Type>(value, nullptr);
        tail = (*tail).next;
      }
      size++;
      //
    }
    Type& front() const {
      return (*head).value;
    }
    void pop(){
      Node<Type>* temp = head;
      head = (*head).next;
      delete temp;

      size--;
    }
    bool empty() const {
      return size == 0;
    }
      
};

short t,n;
vector< vector<short> > mem(1001);
bool was[1001];

void shift(queue<short>& q, int k){
    while(k--){
        q.push(q.front());
        q.pop();
    }
}

vector<short> solve(){
    queue<short> ordered_deck;
    for(int i = 0; i < n; i++) ordered_deck.push(i);
    vector<short> initial_deck(n);
    initial_deck.set_size(n);
    for(int i = 1; i <= n; i++){ 
        shift(ordered_deck, i);
        int card_index = ordered_deck.front();
        ordered_deck.pop();
        initial_deck[card_index] = i;
    }
    // for(int i = 0; i < initial_deck.size(); i++) cout << initial_deck[i] << ' ';
    return initial_deck;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;

    while(t--){
        cin >> n;
        vector<short> v;
        if(was[n]) v = mem[n];
        else v = solve();
        mem[n] = v;
        was[n] = true;
        for(int i = 0; i < v.size(); i++) cout << v[i] << ' ';
        cout << '\n';
    }

} */