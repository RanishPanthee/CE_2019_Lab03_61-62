#include "linkedbst.h"

int main(){
    linkedBST o;
    o.searchBST(5);
    o.isEmpty();
    o.addBST(5,5);
    o.addBST(6,6);
    o.addBST(7,6);
    o.addBST(4,6);
    o.addBST(8,6);
    o.addBST(10,6);
    o.searchBST(4);
    o.searchBST(7);
    Node* root= nullptr;
    root= o.deleteBST(root,5);
    root= o.deleteBST(root,6);
    root= o.deleteBST(root,10);
    

}