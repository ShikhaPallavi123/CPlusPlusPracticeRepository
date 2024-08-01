//
// Created by Shikha Pallavi on 7/31/24.
//
#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
private:
    Node* head;
    Node* tail;
public:
    List(){
        head = NULL;
        tail = NULL;
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        } else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void insert(int val, int pos){
        Node* newNode = new Node(val);
        Node* temp = head;
        for(int i = 0; i < pos -1; i++){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    void printList(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main(){
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.printList();
    ll.insert(100, 1);
    ll.printList();


    return 0;
}