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
            return it->val; // Will return the value where the iterator is
        }
        void begin(){
            it = front; // will move iterator to the beginning
        }
        void end(){
            while(it->next != nullptr){            
                it = it->next; // will move iterator to the end
            }
        }
        bool isEmpty(){ // Check to see if empty
            if(front == nullptr){
                empty = true;
            }
            else{
                empty = false;
            }
            return empty;
        }
        int getfront(){ //Get front value
            return front -> val;
        }
        void move_up(){ //move iterator forward one
            it = it->next;
        }
        void push_front(int x){ //Add another value to the front
            Node temp(x,*front);
            front = &temp;
            size++;
        }
        void pop_front(){ // remove the front
            Node *temp = front;
            front = front->next;
            delete temp;
        }
        void insert_after(int y){ //insert value where desired
            Node toInsert(y);
            Node *temp = &toInsert;
            toInsert.next = it->next;
            it->next = temp;
            delete temp;
        }
        void clear(){ //Will empty the list
            Node *temp = front;
            it = front;
        }
};