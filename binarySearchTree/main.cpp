#include <iostream>

using namespace std;

 struct Node{
 int data;
 Node *left;
 Node *right;
 };
 Node *root=NULL;

 Node* search(Node *curr, int item)
 {

    Node *loc=NULL;

    if(curr->data==item)
    {
        loc=curr;
    }
    else if(curr->data>item)
    {
        //cout<<curr<<endl;
        if(curr->left!=NULL)
        {
            loc=search(curr->left,item);
        }

    }
    else
    {
        if(curr->right!=NULL)
        {
            loc=search(curr->right, item);
        }

    }

    return curr;
 }

int insert(int item)
{
    Node *loc=NULL;

    loc=search(root, item);
    if(loc->data==item)
    {
        cout<<"Value already exist"<<endl;

    }else
    {
   Node n1;
     n1.data=item;
     n1.left=NULL;
     n1.right=NULL;
     if(item<loc->data)
     {
         loc->left=&n1;
     }else
     {
         loc->right=&n1;
     }
     cout<<"Parent: "<<loc<<"Child: "<<&n1<<"Value: "<<n1.data<<endl;
    }
    return 0;
}

 int main()
 {
     Node n1;
     int number;
     Node *loc=NULL;
     n1.data=43;
     n1.left=NULL;
     n1.right=NULL;
     root=&n1;
     cout<<root<<endl;
     loc=search(root, 31);
     while(1)
     {
         cin>>number;
         insert (number);

     }
     cout<<loc;

     return 0;
 }



