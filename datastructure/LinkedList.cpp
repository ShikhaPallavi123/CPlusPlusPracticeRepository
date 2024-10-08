//
// Created by Shikha Pallavi on 7/22/24.
//
#include<iostream>
using namespace std;

class Node { // individual node
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{ // collection of all the node
private:
    Node* head;
    Node* tail;

public:
    List(){
        head = NULL;
        tail = NULL;
    }
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        } else{
            newNode-> next = head;
            head =newNode;
        }
    }
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        } else{
            tail-> next = newNode;
            tail =newNode;
        }
    }

    void printList(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
    }
};

int main(){
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(4);
    ll.push_back(5);
    ll.printList();


    return 0;
}
