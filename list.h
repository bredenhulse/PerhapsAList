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
        int push_front(int x){
            
        }
};