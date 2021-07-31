#include<iostream>
#include<ArrayBST.h>
Array_BST::Array_BST(){
    for(int i=0; i<Max_size; i++)
    {
        nodes[i]=NULL;
    }
}
Array_BST::~Array_BST(){}
bool Array_BST::is_empty()
{
    return this->nodes[1]==NULL;
}
void Array_BST::add(int key,int data)
{
    Node* newNum(new Node(key,data));
    for(int i=1;i<Max_size;i++)
    { 
        Node* node=this->nodes[i];
     if(node==NULL)
       this->nodes[i]=newNum;
     break;
    }
    elseif(node->key<key)
    {
       i=2*i+1;
    }
    else
    {
      i=2*i;
    }
   
}
int Array_BST::remove(int Key)
{
   if(Key*2<=Max_size&& nodes[key*2]!=-1)
   {
       return key*2;
       break;
   }elseif(key*2<=Max_size&&nodes[key*2+1]!=-1)
   {
       return key*2+1;
   }
   else
   {
       return 0;
   }
}

int search(int targetkey)
{
    int i=0;
    bool found=false;
     
    while(i<Max_size){
        Node*node=this->nodes[i];
        if (node==Null){
            break;
        }elseif(node=>==targetKey){
            found=true;
            break;
        }elseif(node->key<targetkey)
        {
               i=2*i+1;
        }else{
            i=2*i;
        }
    }
}