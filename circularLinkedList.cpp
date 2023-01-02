#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node(){
        int value;
        value = this -> data;
        while(next != NULL){
        delete next;
        delete prev;
        this -> next = NULL;
        this -> prev = NULL;
        }
        cout << " Memory is free for "<< value << endl;

    }
};

void insertAtHead(Node *&head, Node* &tail, int data)
{
    if(head == NULL){
        Node * temp = new Node(data);
        head = temp;
        tail = temp;
    }else{
        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtTail(Node * & head,Node *&tail, int data)
{
    if(head == NULL){
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    Node *temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    if (position == 1)
    {
        insertAtHead(head,tail, data);
    }
    else
    {
        int cnt = 1;
        Node *temp = head;
        while (cnt < position - 1)
        {
            temp = temp->next;
            cnt++;
        }
        // create a new node
        if (temp->next == NULL)
        {
            insertAtTail(head,tail, data);
            return;
        }
        Node *newNode = new Node(data);
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next = newNode;
    }
}

void deleteNode(Node* &head,Node *& tail,int position){
    if(position == 1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        temp -> prev = NULL;
        delete temp;
        
    }else{
        int cnt = 1;
        Node* curr = head;
        Node* prev = NULL;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            curr -> prev = prev;
            cnt++;
        }
        if(curr -> next == NULL){
            tail = prev;
            tail -> next = NULL;
            curr -> prev = NULL;
            delete curr;
            return;
        }
        prev -> next = curr -> next;
        curr -> next -> prev = prev;
        curr -> next = NULL;
        curr -> prev = NULL;
        delete curr;

        
    }

}

int getLength(Node *head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
int main(void)
{
    Node *Node1 = NULL ;// new Node(10);
    Node *head = Node1;
    Node *tail = Node1;
    insertAtHead(head,tail, 20);
    print(head);
    insertAtHead(head,tail, 11);
    insertAtHead(head,tail, 14);
    print(head);
    insertAtTail(head,tail, 16);
    insertAtTail(head,tail, 17);
    print(head);
    insertAtPosition(head,tail, 3, 60);
    print(head);

    cout << "Head = " << head->data << endl;
    cout << "tail = " << tail->data << endl;
    cout << getLength(head) << endl;
    deleteNode(head,tail,1);
    print(head);
    cout << "Head = " << head->data << endl;
    cout << "tail = " << tail->data << endl;
    cout << getLength(head) << endl;
    deleteNode(head,tail,5);
    print(head);
    cout << getLength(head) << endl;
    cout << "Head = " << head->data << endl;
    cout << "tail = " << tail->data << endl;
    deleteNode(head,tail,3);
    print(head);
    cout << getLength(head) << endl;
    cout << "Head = " << head->data << endl;
    cout << "tail = " << tail->data << endl;
    return 0;
}