#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    ~Node(){
        int value = this -> data;
        while(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout << "Memory is free for value = " << value << endl;
    }
};
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " " ;
        temp = temp -> next;
    }
    cout<<endl;
}

void insertAtHead(Node* &head, Node *& tail, int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
    newNode -> next = head;
    head = newNode;
}

void insertAtTail(Node *& head,Node* &tail,int data){
    // creat a new node
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int data){
    int cnt = 1;
    if ( position == 1 ){
        insertAtHead(head,tail,data);
        return;
    }
    Node* temp = head;
    while(cnt < position - 1){
        temp = temp -> next;
        cnt++;
    }
    if ( temp -> next == NULL){
        insertAtTail(head,tail,data);
        return;
    }
    // creat a new node at postion
     Node* newNode = new Node(data);
    newNode -> next = temp -> next;
    temp -> next = newNode;

}

void deleteNode(Node* &head,Node *& tail,int position){
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }else
    { 
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt < position){
             prev = curr;
             curr = curr -> next;
             cnt++;
        }
        if(curr -> next == NULL){
            tail = prev;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr; 

    }
}

void deleteValue(Node* &head,Node * &tail,int value){
    Node * temp = head;
    int cnt = 1;
    while(temp != NULL){
        if(temp -> data == value){
            deleteNode(head,tail,cnt);
            return;
        }
        temp = temp -> next;
        cnt++;
    }
    cout << value << " is not present\n";
}



int main(){
    Node* Node1 = new Node(10);
    // cout << Node1 -> data << endl;
    // cout << Node1 -> next << endl;
    Node * head = NULL;
    // head = Node1;
    Node* tail = NULL;
    insertAtHead(head,tail,12);
    insertAtHead(head,tail,2);
    insertAtHead(head,tail,15);
    insertAtTail(head,tail,1);
    insertAtTail(head,tail,12);
    insertAtTail(head,tail,13);
    // insertAtPosition(head,tail,6,22);
    print(head);

    cout << "head "<< head -> data << endl;
    cout << "tail "<< tail -> data << endl;

    deleteNode(head,tail,7);
    print(head);
    cout << "head "<< head -> data << endl;
    cout << "tail "<< tail -> data << endl;

    deleteValue(head,tail,312 );
    print(head);

    cout << "head "<< head -> data << endl;
    cout << "tail "<< tail -> data << endl;
    return 0;
}