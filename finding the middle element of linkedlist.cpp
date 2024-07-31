/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *findMiddle(Node *head) {
    // Write your code here
    int count=0;
    Node *T=head;
    while(T!=NULL){
        count++;
        T=T->next;
        
        }
        int mid=count/2;
        Node*ptr=head;
        while (mid--) {
        ptr = ptr->next;
    }
    return ptr;


    
}

