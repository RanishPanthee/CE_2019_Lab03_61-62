#ifndef linkedBST_h
#define linkedBST_h

#include "BST.h"

struct Node {
    int key;
    int value;
    Node* leftChild;
    Node* rightChild;
};

class linkedBST : public BST {
public:
    linkedBST();
    ~linkedBST();
    bool isEmpty();
    void addBST(int key, int value);
    bool searchBST(int targetKey);
    Node* Min(Node* root);
    Node* deleteBST(Node* root,int keytodelete);
private:
    Node* root;
    void addBST(Node* root, Node* newNode);
  
};
#endif