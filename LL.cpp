// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//         int data;
//         Node* next;
// };      

// void tranversal(Node *ptr){
//     Node *temp = ptr->next;
//     while(temp != NULL){
//         cout << "hehe" <<  temp->data << endl;
//         temp = temp->next;
//     }
// }



// int main(){
//     Node *head = new Node;
//     Node *first = new Node;
//     Node *second = new Node;

    
//     head->next = first;
//     first->data = 29;
//     first->next = second;
//     second->data = 34;
//     second->next = NULL;

//     tranversal(head);

// }


#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;


    Node(int data){
        this->data = data;
        this->next=NULL;
    }
};
    void insertathead(Node* &head, int d){
        Node*temp=new Node(d);
        temp->next=head;
        head=temp;
    }
    
    void insertattail(Node* &head, int d){
        
    }

    void print(Node* &head){
        Node* temp = head;

        while(temp!=NULL){
            cout << temp->data << endl;
            temp=temp->next;
        }
        cout<<endl;
    }
int main(){
    //created a new node
    Node*node1=new Node(10);
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;
    
    //head pointed to node1
    Node*head=node1;
    print(head);
    insertathead(head,12);
    print(head);
    insertathead(head,15);
    print(head);


}