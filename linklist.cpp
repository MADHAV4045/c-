#include<iostream>
using namespace std;
//node create
class Node {
    public:
    int data;
    Node*next;
    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};

int main(){
    // obeject is create heap memory
    Node*node1=new Node(15);
    cout<< node1-> data<<endl;
    cout<< node1->next<<endl;





return 0;
}