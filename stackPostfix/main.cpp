#include<iostream>
using namespace std;

int stack[100], max_size=100, top=0;
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
int push(int item)
{
    if(isFull()==0)
    {
        stack[top]=item;

        top++;
    }
    return 0;
}
int pop()
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
int i=0, item=0, choice=0,a=0,b=0;
string statement="26*41-/53*+";
char ch;

for(i=0;i<statement.length();i++)
{
   if(statement[i]=='+'||statement[i]=='-'||statement[i]=='*'||statement[i]=='/')
    {
        b=pop();
        a=pop();
        if(statement[i]=='+')
        {
            push(a+b);
        }else if(statement[i]=='-')
        {
            push(a-b);
        }else if(statement[i]=='*')
        {
            push(a*b);
        }else if(statement[i]=='/')
        {
            push(a/b);
        }

    }
    else
    {
        push(statement[i]-48);
    }

}
pop();




return 0;
}

