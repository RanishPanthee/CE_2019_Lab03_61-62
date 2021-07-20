#ifndef BST_h
#define BST_h


class BST {
public:
    virtual bool isEmpty() = 0;
    virtual void addBST(int key, int value) = 0; 
    virtual bool searchBST(int targetKey) = 0;
};
#endif