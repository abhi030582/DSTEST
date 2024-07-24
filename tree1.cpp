#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
};
int main()
{
   int no;
   cout<<"enter number to add in tree"<<endl;
   cin>>no;

   Node *newnode=new Node();
   newnode->data=no;
   newnode->left=NULL;
   newnode->right=NULL;

   Node *root=NULL;

   root->left;
   root->right;



   if(root==NULL)
   {
       root= newnode;
       cout<<root->data<<endl;
       cout<<root<<endl;
       cout<<newnode<<endl;


   }
   else{
    if(root->data>no){
        root->left=newnode;
        cout<<root->left->data<<endl;
   }
   else{
    root->right=newnode;
    cout<<root->right<<endl;
    cout<<newnode->data<<endl;
    cout<<newnode;
   }
   }


}
