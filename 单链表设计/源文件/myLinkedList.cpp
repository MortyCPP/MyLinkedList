#include "myLinkedList.h"
//无参构造函数
MyLinkedList::MyLinkedList(){
    this->size=0;
    this->next=nullptr;
}
//获取链表中第 index 个节点的值。如果索引无效，则返回-1。
int MyLinkedList::get(int index){
    if(index>=this->size||index<0){
        return -1;
    }
    MyLinkedList* p=this;
    for (int i=0; i<=index; i++) {
        p=p->next;
    }
    return p->val;
}
//在链表的第一个元素之前添加一个值为 val 的节点。插入后，新节点将成为链表的第一个节点。
void MyLinkedList::addAtHead(int val){
    MyLinkedList* newP=new MyLinkedList();
    newP->val=val;
    newP->next=this->next;
    this->next=newP;
    this->size++;
}
//将值为 val 的节点追加到链表的最后一个元素。
void MyLinkedList::addAtTail(int val){
    MyLinkedList* newP=new MyLinkedList();
    newP->val=val;
    MyLinkedList* p=this;
    for (int i=0; i<this->size; i++) {
        p=p->next;
    }
    p->next=newP;
    this->size++;
}
//在链表中的第 index 个节点之前添加值为 val的节点。如果 index 等于链表的长度，则该节点将附加到链表的末尾。如果 index 大于链表长度，则不会插入节点。如果index小于0，则在头部插入节点。
void MyLinkedList::addAtIndex(int index, int val){
    MyLinkedList* newP=new MyLinkedList();
    newP->val=val;
    if(index==this->size){
        MyLinkedList* p=this;
        for (int i=0; i<this->size; i++) {
            p=p->next;
        }
        p->next=newP;
        this->size++;
    }else if (index>this->size){
        return;
    }else if (index<0){
        newP->next=this->next;
        this->next=newP;
        this->size++;
    }else{
        MyLinkedList* p=this;
        for (int i=0; i<index; i++) {
            p=p->next;
        }
        MyLinkedList* recordp=p->next;
        p->next=newP;
        newP->next=recordp;
        this->size++;
    }
}
//如果索引 index 有效，则删除链表中的第 index 个节点。
void MyLinkedList::deleteAtIndex(int index){
    if(index<this->size&&index>=0){
        MyLinkedList* p=this;
        for (int i=0; i<index; i++) {
            p=p->next;
        }
        MyLinkedList* recordp=p->next->next;
        delete p->next;
        p->next=nullptr;
        p->next=recordp;
        this->size--;
    }else{
        return;
    }
}
//析构函数
MyLinkedList::~MyLinkedList(){
    
}
