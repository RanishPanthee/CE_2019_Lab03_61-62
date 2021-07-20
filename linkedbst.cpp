#include <stdio.h>
#include <iostream>

#include "linkedBST.h"

linkedBST::linkedBST() : root(NULL) {}
linkedBST::~linkedBST(){
    delete root;
}

bool linkedBST::isEmpty()
{
    return this->root == NULL;
}

void linkedBST::addBST(int key, int value)
{
    Node* newNode(new Node);
    newNode->key = key;
    newNode->value = value;
    newNode->leftChild = newNode->rightChild = NULL;
    
    if (this->isEmpty())
    {
        this->root = newNode;
    }
    else
    {
        this->addBST(this->root, newNode);
    }
}

void linkedBST::addBST(Node *subbst, Node *newNode)
{
    
    if (subbst->key > newNode->key) {
        if (subbst->leftChild != NULL) {
            addBST(subbst->leftChild, newNode);
        }
        else {
            subbst->leftChild = newNode;
        }
    }
    else if (subbst->key < newNode->key) {
        if (subbst->rightChild != NULL) {
            addBST(subbst->rightChild, newNode);
        }
        else {
            subbst->rightChild = newNode;
        }
    }
}

Node* linkedBST:: Min(Node* root){
    while (root->leftChild!=NULL)
    {
        root = root->leftChild;
        return root;
    }
    
}

Node* linkedBST :: deleteBST(Node* root,int keytodelete){
    if (root == NULL)
    {
        return root;
    }

    else if (keytodelete < root->key)
    {
        root->leftChild = deleteBST(root->leftChild,keytodelete);
    }

    else if (keytodelete > root->key)
    {
        root->rightChild = deleteBST(root->rightChild,keytodelete);
    }
    
    else{
        if(root->leftChild == NULL && root->rightChild == NULL)
        {
           delete root;
        }
        else if (root->leftChild == NULL)
        {
            Node* ptr =root;
            root = root->rightChild;
            delete ptr;
        }
        else if (root->rightChild == NULL)
        {
            Node* ptr =root;
            root = root->leftChild;
            delete ptr;
        }
        else{
            Node* ptr =Min(root->rightChild);
            root->key = ptr->key;
            root->rightChild = deleteBST(root->rightChild, ptr->key);
        }
        
        
    }
    return root;
    
    
}

bool linkedBST::searchBST(int targetKey) {
    bool search;
    if (this->isEmpty()) {
        search =true;
        std::cout << "---EMPTY TREE---" << std::endl;
    } else  {
        Node* ptr = this->root;
        
        while (ptr != NULL) {
            if (ptr->key == targetKey) {
                std::cout<<targetKey<<" is in tree"<<std::endl;
                break;
            } else if (ptr->key < targetKey) {
                ptr = ptr->rightChild;
            } else {
                ptr = ptr->leftChild;
            }
        }
        
    }
    return search;
}