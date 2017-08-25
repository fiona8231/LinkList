#include <iostream>
#include <cstdlib>
#include "List.h"

using namespace std;

//CONSTRUCTOR

List::List() {
    head = NULL;
    current = NULL;
    temp = NULL;
}

void List::addNode(int addData) {
    nodePointer n = new node;
    //Last element in the list
    n->next = NULL;
    n->data = addData;

    if(head != NULL){
        current = head;
        while (current->next != NULL){
            current = current->next;
        }
        current->next = n;
    } else{
        head = n;

    }

}

void List::deleteNode(int delData) {

    nodePointer  delPointer = NULL;
    temp = head;
    current = head;

    while(current != NULL && current->data != delData){

        temp = current;
        current = current->next;

    }

    if(current == NULL){

        cout << delData << "was not in the list\n";
        delete  delPointer;

    } else{
        delPointer = current;
        current = current->next;
        temp->next = current;

        if(delPointer ==head){
            head = head->next;
            temp = NULL;
        }
        delete delPointer;
        cout << "The value" << delData <<"was deleted\n";

    }


}

void List::printList() {
    current = head;
    while(current != NULL){
        cout << current->data << endl;
        current = current->next;

    }
}