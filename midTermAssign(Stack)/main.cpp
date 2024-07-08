#include<iostream>
#define size 5
using namespace std;
class Stack
{int st[size];
public:int top=-1;
public:int push(int element)
{
  if(top==size-1)

  {
      cout<<"Stack is full can not insert value "<<endl;
      return 0;
  }
  st[top+1]=element;
  top++;
  return 1;

}

int pop()
{

  if(top==-1)
  {

      return 0;
  }



  top--;

return 1;

}


void ttop()
{
    top=-1;
}


};





int main()
{
Stack s1;
int T,n,a,m;

cout<<"Enter number of stack :";
cin>>T;

for(int i=0;i<T;i++)

    {

        m=1;
    cout<< "Enter Stack Size : ";
      cin>>n;
      for(int j=0;j<n;j++)
        {
           cin>>a;
             if(a==1)
                {
                 s1.push(1);
                }
               else if(a==0)
                {
                  int l=s1.pop();
                  m=m*l;
                }
        }

       if(m==0)
      {
    cout<<"invalid"<<endl;
}
else{cout<<"valid"<<endl;}

   s1.ttop();
    }

return 0;

}
