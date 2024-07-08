#include<iostream>
using namespace std;

char stack[100], max_size=100, top=0;
int isFull()
{
    if(top==max_size)
    {
        cout<<"Stack is Full.";
        return 1;
    }

    return 0;
}
int isEmpty()
{
    if(top==0)
    {
        cout<<"Stack is Empty.";
        return 1;
    }

    return 0;
}
int push(char item)
{
    if(isFull()==0)
    {
        stack[top]=item;
        top++;
    }
    return 0;
}
char pop()
{
    if(isEmpty()==0)
    {
        top--;
        cout<<stack[top]<<endl;
        return stack[top];
    }
}

int main()
{
int i=0, item=0, choice=0;
string statement="[(2*6)/{(4-1)}]";
char ch;

for(i=0;i<statement.length();i++)
{

    if(statement[i]=='('||statement[i]=='{'||statement[i]=='[')
    {
        push(statement[i]);
    }
    else if (statement[i]==')'||statement[i]=='}'||statement[i]==']')
    {
        if (isEmpty()==1)
        {
            cout<<"Statement is Invalid";
        }
        ch=pop();
        if ((statement[i]==')'&&ch=='(')||statement[i]=='}'&&ch=='{'||(statement[i]==']'&&ch=='['))
            {
                cout<<"Parenthesis Match"<<endl;
            }else
            {
                choice - 1;
            }

    }

}
if (choice==0)
{
    cout<<"Statement is Valid"<<endl;
}else
cout<<"Invalid Statement"<<endl;

return 0;
}

