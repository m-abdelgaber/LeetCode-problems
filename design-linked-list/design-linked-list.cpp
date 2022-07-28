class MyLinkedList {
    private:
    int size;
    class Node{
        public:
        Node* next; 
        int val;
        Node(){
            next = nullptr;
        }
        Node(int val){
            next = nullptr;
            this->val = val;
        }
    };
public:
    Node* head;
    Node* tail;
    MyLinkedList() {
        head = nullptr;
        tail = nullptr;
        size =0;
    }
    
    int get(int index) {
        if(index >= size)
            return -1;
        else if (index == size-1)
            return tail->val;
        Node* curr = head;
        for(int i=0; i< index; i++){
            
            curr = curr->next;
        }
        return curr->val;
    }
    
    void addAtHead(int val) {
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
        if (tail == nullptr)
            tail = head;
        size++;
    }
    
    void addAtTail(int val) {
        Node*temp = new Node(val);
        Node* curr = head;
        if(head == nullptr){
            head = temp;
            tail = temp;
            size++;
            return;
        }
        // while(curr->next != nullptr){
        //     curr = curr->next;
        // }
        tail->next = temp;
        tail = temp;
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if (index > size)
            return;
        else if(index == size){
            addAtTail(val);
            return;
        }
        else if(index ==0){
            addAtHead(val);
            return;
        }
        Node* temp = new Node(val);

        Node* curr = head;
        for(int i=0; i< index-1; i++){
            curr = curr->next;
        }
        temp->next = curr->next;
        curr->next = temp;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if(index >= size)
            return;
        if(index ==0){
            
            head = head->next;
            size--;
            return;
        }
        Node* curr = head;
        for(int i=0; i< index-1; i++){
            curr = curr->next;
        }
        
        curr->next = (curr->next)->next;
        if (curr->next == nullptr){
            tail = curr;
        }
        
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */