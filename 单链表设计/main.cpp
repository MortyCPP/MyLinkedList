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
    //以上为测试代码控制台输出结果应为：1 2 3 4 5
    return 0;
}
