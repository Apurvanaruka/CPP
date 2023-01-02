#include<iostream>
using namespace std;
class node
{
    public:
        int data;
        node * left;
        node * right;
        node(int d){
            this -> data = d;
            this -> right = NULL;
            this -> left = NULL;
        }
};

node *buildNode(node* root){
    cout << "Enter data for node : ";
    int data;
    cin >> data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout << "Enter data for inserting data in left of " << data << endl;
    root -> left = buildNode(root -> left);
    cout << "Enter data for inserting data in right of " << data << endl;
    root -> right = buildNode(root -> right);
}

int main(){
    node *root =  NULL;
    root = buildNode(root);
    return 0;
}