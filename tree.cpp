#include<iostream>
using namespace std;
class node{
public:
   int data;
   node* left;
   node* right;

   node(int value){  //constructor
     data=value;
     left=NULL;
     right=NULL;
   }
};

int main()
{
    node* root=new node(10); //object

    root->left=new node(20);
    root->right=new node(30);

    root->left->left=new node(40);
    root->left->right=new node(50);

    cout<<"Root node: "<<root->data<<endl;

    return 0;
}