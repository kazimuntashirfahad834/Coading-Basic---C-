#include <iostream>
using namespace std;

int queue[100],front = 0,rear = 0,max_size=0;

int isFull()
{
   if((front==0&&rear==max_size-1)||(front==rear+1))
  {
      cout<<"Queue isFull.";
      return 1;
  }
  return 0;
}
int isEmpty()
{
   if(front==-1&&rear==-1)
   {
       cout<<"Queue isEmpty.";
       return 1;
   }
return 0;
}
int enqueue(int item)
{
    if(isFull() == 0 )

    {
        if(front ==-1&&rear == -1)
    {
        front = 0 ;
        rear = 0 ;
    }
    else
    {
        rear=(rear+1)%max_size;
    }
    queue[rear] = item;
    }
return 0;
}
int dequeue()
{
    int value = 0 ;
    if(isEmpty() == 0)
    {
    value = queue[front] ;
    if (front == rear)
    {
        front = -1 ;
        rear = -1 ;
    }
    else
    {
        front=(front+1)%max_size;
    }
    return value;
    }
}
int main()
{
    int i=0, item=0, choice=0;
    front = -1;
    rear = -1;
    cout<<"Maximum size of the Circular Queue"<<endl;
    cin>>max_size;
    while(1)
    {
        item=0;
        cout<<endl<<"1.Enqueue; 2.Dequeue; 3.Show"<<endl;
        cin>>choice;
        cout<<endl;
        if(choice==1)
        {
            cout<<"Input Value:"<<endl;
            cin>>item;
            enqueue(item);
        }
        else if (choice==2)
        {
            item==dequeue();
            cout<<item<<endl;

        }
        else if(choice==3)
        {
            if(isEmpty()==0)
            {
                for(i=front;i<rear;i++) cout<<queue[i]<<" ";
            }

        }
        else
        {
            break;
        }
    }
    return 0;
}

