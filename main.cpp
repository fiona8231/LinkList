#include <iostream>
#include "List.h"

using namespace std;

int main() {

    List list;
    list.addNode(3);
    list.addNode(4);
    list.addNode(5);
    list.addNode(7);

    list.printList();

    list.deleteNode(3);
    list.printList();



}
