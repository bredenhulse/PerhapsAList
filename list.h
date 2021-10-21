struct Node{
    int val;
    Node* next;

    Node(){
        val = 0;
        next = nullptr;
    }
    Node(int v){
        val = v;
        next = nullptr;
    }
    Node(int v, Node n){
        val = v;
        next = &n;
    }
};

class List{
    private:
        Node* front; //points to the front of list
        Node* it; //points to the current node
        int size; // gives size
        bool empty; //checks to see if empty

    public:
        List(){
            front = nullptr;
            it = nullptr;
            size = 0;
        }
        List(int v){
            Node n(v);
            front = &n;
            it = &n;
            size = 1;
        }
        int get_iterator(){
            return it->val;
        }
        void begin(){
            it = front;
        }
        void end(){
            while(it->next != nullptr){            
                it = it->next;
            }
        }
        bool isEmpty(){
            if(front == nullptr){
                empty = true;
            }
            else{
                empty = false;
            }
        }
        int front(){
            return front -> val;
        }
        void move_up(){
            it = it->next;
        }
        void push_front(int x){
            Node temp(x,*front);
            front = &temp;
            size++;
        }
        void pop_front(){
            Node *temp = front;
            front = front->next;
            delete temp;
        }
        void insert_after(int y){
            Node toInsert(y);
            Node *temp = &toInsert;
            toInsert.next = it->next;
            it->next = temp;
            delete temp;
        }
        void clear(){
            temp = front();
        }
};