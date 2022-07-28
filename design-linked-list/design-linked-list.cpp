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
    MyLinkedList() {
        head = nullptr;
        size =0;
    }
    
    int get(int index) {
        if(index >= size)
            return -1;
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
        size++;
    }
    
    void addAtTail(int val) {
        Node*temp = new Node(val);
        Node* curr = head;
        if(head == nullptr){
            head = temp;
            size++;
            return;
        }
        while(curr->next != nullptr){
            curr = curr->next;
        }
        curr->next = temp;
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index == size){
            addAtTail(val);
            return;
        }
        else if (index > size)
            return;
        Node* temp = new Node(val);
        if(index ==0){
            temp-> next = head;
            head = temp;
            size++;
            return;
        }
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