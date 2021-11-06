#include <iostream>
using namespace std;
#include "myLinkedList.h"
int main(int argc, const char * argv[]) {
    MyLinkedList* myLinkedList=new MyLinkedList();
    myLinkedList->addAtTail(1);
    myLinkedList->addAtTail(2);
    myLinkedList->addAtTail(3);
    myLinkedList->addAtTail(4);
    myLinkedList->addAtTail(5);
    myLinkedList->addAtIndex(2, 0);
    myLinkedList->deleteAtIndex(2);
    for (int i=0; i<myLinkedList->size; i++) {
        cout<<myLinkedList->get(i)<<" "<<endl;
    }
    return 0;
}
