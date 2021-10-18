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
};