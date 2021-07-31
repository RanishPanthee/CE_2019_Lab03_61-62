//interface class
#ifndef BST_h
#define BST_h
class BST{
    public:
    virtual bool is_empty()=0;
    
    void add(int key,int data)=0;
    void remove(int key,int data=0);
    int search(int targetkey )=0;

};
#endif