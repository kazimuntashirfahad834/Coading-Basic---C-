#include <iostream>

using namespace std;

struct Node
{   int data;
    Node *next;
    Node *prev;
};

Node *head=NULL;
int traverse()
{
    Node *current = head;
    cout<<"Head Node: "<<head<<endl;
    while(current!=NULL)
    {
        cout<<"Data:"<<current->data<<" Node:"<<current<<" Previous Node:"<<current->prev<<" Next Node:"<<current->next<<endl;
        current=current->next;

    }
    return 0;
}

int insert(int key, int val)
{
    Node node;
    Node *new_node=&node;
    Node *current;
    new_node->data=val;
    cout<<"Data:"<<val<<" Node:"<<new_node<<endl;
    current->next->prev=new_node;
    new_node->next=current->next;
    current->next=new_node;
    new_node->prev=current;
    return 0;
}

int show() {

   struct Node* ptr;

   ptr = head;

   while(ptr != NULL) {

      cout<< ptr->data <<" ";

      ptr = ptr->next;

   }

}

int main()
{
    Node n1;
    int i=0;
    Node *current;
    n1.data=100;
    n1.next=NULL;
    n1.prev=NULL;
    head=&n1;
    current=&n1;
    Node nd[10];
    for (i=0;i<10;i++)
    {
        nd[i].data=101+i;
        nd[i].next=NULL;
        current->next=&nd[i];
        current->next->prev=current;
        current=&nd[i];
        current->next=NULL;

   insert(10);

   insert(11);

   cout<<"The doubly linked list is: ";

   show();
    }

    traverse();
    insert (105,10);
    return 0;
}
