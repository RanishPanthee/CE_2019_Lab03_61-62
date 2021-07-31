
#ifndef BST_h
#define BST_h
#define Max_size 32
#include"BST.h"
struct Node{
    int key;
    int data;
    Node(int key,int data):key(key),data(data){}
};
class Array_BST:public BST{
    private:
    Node* nodes[Max_size];
    public:
    Array_BST();
    ~Array_BST();
    bool is_empty();
    void add(int key,int data);
    void remove(int key,int data);
    int search(int targetkey );
}
#endif
