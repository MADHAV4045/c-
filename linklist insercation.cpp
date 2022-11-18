//out put is 15,12,10 this oder
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};
//refrence(orignal link list bane copy not)
void insertAtHead(Node* &head, int d ) {

    //new node create
    Node* temp = new Node (d);
    temp -> next=head;
    head=temp;

}

void Print(Node* &head){
    Node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;

    }
    cout<<endl;
}


int main(){
    //created a new node 
    Node*node1=new Node(10);
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;
    //head to pointed to node1
    Node* head =node1;
    Print(head);

    insertAtHead(head,12);
    Print(head);

    insertAtHead(head,15);
    Print(head);
    return 0;
}