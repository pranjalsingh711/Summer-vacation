#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};


void insertEnd(Node*& head, int value) {
    Node* newNode = new Node{value, NULL};

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}


void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}


Node* mergeSorted(Node* head1, Node* head2) {

    Node* result = NULL;
    Node* tail = NULL;

    while (head1 != NULL && head2 != NULL) {

        Node* newNode;

        if (head1->data < head2->data) {
            newNode = new Node{head1->data, NULL};
            head1 = head1->next;
        }
        else {
            newNode = new Node{head2->data, NULL};
            head2 = head2->next;
        }

        if (result == NULL) {
            result = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    
    while (head1 != NULL) {
        tail->next = new Node{head1->data, NULL};
        tail = tail->next;
        head1 = head1->next;
    }

    while (head2 != NULL) {
        tail->next = new Node{head2->data, NULL};
        tail = tail->next;
        head2 = head2->next;
    }

    return result;
}

int main() {

    Node* head1 = NULL;
    Node* head2 = NULL;

    insertEnd(head1, 10);
    insertEnd(head1, 30);
    insertEnd(head1, 50);

    insertEnd(head2, 20);
    insertEnd(head2, 40);
    insertEnd(head2, 60);

    cout << "List 1: ";
    display(head1);

    cout << "List 2: ";
    display(head2);

    Node* merged = mergeSorted(head1, head2);

    cout << "Merged List: ";
    display(merged);

    return 0;
}