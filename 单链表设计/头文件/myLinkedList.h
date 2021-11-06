#ifndef myLinkedList_h
#define myLinkedList_h
#include <iostream>
using namespace std;


class MyLinkedList{
public:
    //节点个数
    int size;
    //当前节点的值
    int val;
    //是指向下一个节点的指针/引用
    MyLinkedList* next;
    //无参构造
    MyLinkedList();
    //获取链表中第 index 个节点的值。如果索引无效，则返回-1。
    int get(int index);
    //在链表的第一个元素之前添加一个值为 val 的节点。插入后，新节点将成为链表的第一个节点。
    void addAtHead(int val);
    //将值为 val 的节点追加到链表的最后一个元素。
    void addAtTail(int val);
    //在链表中的第 index 个节点之前添加值为 val的节点。如果 index 等于链表的长度，则该节点将附加到链表的末尾。如果 index 大于链表长度，则不会插入节点。如果index小于0，则在头部插入节点。
    void addAtIndex(int index, int val);
    //如果索引 index 有效，则删除链表中的第 index 个节点。
    void deleteAtIndex(int index);
    //析构函数
    ~MyLinkedList();
};
#endif
