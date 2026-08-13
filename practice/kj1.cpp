#include<iostream>
using namespace std;

struct Node{
    int data;
    Node*next;


};

void insertEnd(Node*& head,int value){
    Node*newNode =new Node();
    newNode->data=value;
    newNode->next=NULL;

    if (head==NULL){
        head=newNode;
        return;
    }
    Node*temp=head;

    while(temp->next != NULL){
        temp=temp->next;
    
    }
    temp->next=newNode;

}

 void display(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}


void reverse(Node*& head) {
    Node* prev = NULL;
    Node* current = head;
    Node* next = NULL;

    while (current != NULL) {
        next = current->next;      
        current->next = prev;      
        prev = current;            
        current = next;            
    }

    head = prev;
}

int main() {
    Node* head = NULL;

    insertEnd(head, 10);
    insertEnd(head, 20);
    insertEnd(head, 30);
    insertEnd(head, 40);

    cout << "Original List: ";
    display(head);

    reverse(head);

    cout << "Reversed List: ";
    display(head);

    return 0;
}