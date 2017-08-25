
#ifndef  LIST
#define  LIST


class List {

public:
    List();
    void addNode(int addData);
    void deleteNode(int delData);
    void printList();


private:

    typedef  struct node{
        int data;

        //creating a pointer node
        node* next;
    }* nodePointer;

    nodePointer head;
    nodePointer current;
    nodePointer temp;



};

#endif
