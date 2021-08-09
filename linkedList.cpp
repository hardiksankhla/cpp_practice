#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }

};

void insertAtEnd(int n, node* &head){

    node* ptr = new node(n);
    node* temp = head;

    if (head==NULL)
    {
        head=ptr;
        cout<<"insert at head"<<endl;
        return;
    }
    
    while (temp->next != NULL)
    {
        temp=temp->next;
    }

    temp->next=ptr;
    cout<<"insert"<<endl;
}

void insertAtStart(int n, node* &head){
    node* ptr = new node(n);
    ptr->next = head;
    head = ptr;
 
}

void deleteNode(int n, node* &head){
    node* temp = head;
    node* deletedNode = NULL;
    if (head==NULL){
        cout<<"LinkedList is empty, nothing to remove here!"<<endl;
        return;
    }
    if (temp->data==n){
        deletedNode = head;
        head=temp->next;
        delete deletedNode;
        cout<<"deleted node "<<n<<" at the start!"<<endl;
        return;
    }
    while (temp->next!= NULL)
    {
        if (temp->next->data==n)
        {   
            deletedNode = temp->next;
            temp->next=temp->next->next;
            delete deletedNode;
            cout<<"deleted node "<<n<<endl;
            return;
        }
        temp=temp->next;
    }
    cout<<"node "<<n<<" is not present"<<endl;
    return; 
}

void deleteNodeAtHead(node* &head){}

void deleteNodeAtTail(node* &head){}

bool search(int n, node* head){
    node* temp = head;
    while (temp!=NULL)
    {
        if (temp->data==n)
        {
            return 1;
        }
        temp=temp->next;
    }
    return 0;
}

void display(node* head){
    node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp<<" -> ";
        cout<<temp->data<<", "<<temp->next<<"; ";
        temp = temp->next;
    }
    cout<<endl;
    
}

int main(){
    node* head = NULL;
    // node* head = new node(4);
    insertAtEnd(1, head);
    insertAtEnd(2, head);
    insertAtEnd(3, head);
    display(head);
    cout<<search(4, head)<<endl;
    insertAtStart(4, head);
    display(head);
    cout<<search(4, head)<<endl;
    cout<<search(5, head)<<endl;
    deleteNode(4, head);
    display(head);
    return 0;
}