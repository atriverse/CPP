#include<iostream>
#include<bits/stdc++.h>

using namespace std;

template <class T=int>

class LinkedList{
    public:
    T data;
    LinkedList<T>* next=NULL;
    LinkedList(){}
    LinkedList(T data){
        this->data=data;
    }
    void displayList(LinkedList<T>* head){
        LinkedList<T>* ptr= head;
        while (ptr!=NULL)
        {
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
        cout<<endl;
    }

    LinkedList<T>* insertAtHead(LinkedList<T>* head, T value){
        LinkedList<T>* new_node=new LinkedList<T>(value);
        new_node->next=head;
        return new_node;
    }

    LinkedList<T>* insertAtTail(LinkedList<T>* head, T value){
        LinkedList<T>* new_node=new LinkedList<T>(value);
        LinkedList<T>* ptr=head;
        while (ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=new_node;
        new_node->next=NULL;
        return head;
    }
};

int main(){
    LinkedList<> head(5);
    LinkedList<> second(10);
    LinkedList<> third(15);
    LinkedList<> fourth(20);
    head.next=&second;
    second.next=&third;
    third.next=&fourth;
    head.displayList(&head);
    LinkedList<>* new_head = head.insertAtHead(&head, 25);
    new_head->displayList(new_head);
    new_head->insertAtTail(new_head, 30);
    new_head->displayList(new_head);
    return 0;
}
