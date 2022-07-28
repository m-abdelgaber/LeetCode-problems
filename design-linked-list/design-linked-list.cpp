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
        if(index >= size || index <0)
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
        addAtIndex(0, val);
    }
    
    void addAtTail(int val) {
        addAtIndex(size, val);
    }
    
    void addAtIndex(int index, int val) {
        if (index > size|| index <0)
            return;
        else{
            Node* temp = new Node(val);
            if(head == nullptr){
                head = temp;
                tail = temp;
                size++;
                return;
            }
            else  if (index ==0){
                temp->next = head;
                head = temp;
                size++;
                return;
            }
            else if (index == size){
                tail->next = temp;
                tail = temp;
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
    }
    
    void deleteAtIndex(int index) {
        if(index >= size|| index <0)
            return;
        if(index ==0){
            Node* nxt = head->next;
            delete head;
            head = nxt;
            size--;
            return;
        }
        Node* curr = head;
        for(int i=0; i< index-1; i++){
            curr = curr->next;
        }
        Node* nxt = curr->next;
        curr->next = (curr->next)->next;
        delete nxt;
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