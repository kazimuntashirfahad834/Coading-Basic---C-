#include <iostream>

using namespace std;

int main()
{
    int input[100], i=0, pass=0, n=0, temp=0;

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>input[i];
    }

    for(pass=0;pass<n-1;pass++)
    {
        cout<<"Pass: "<<pass<<endl;
        for(i=0;i<n-pass-1;i++)
        {
            if(input[i]>input[i+1])
            {
                cout<<input[i]<<">"<<input[i+1]<<endl;
                temp=input[i];
                input[i]=input[i+1];
                input[i+1]=temp;
            }
        }
        for(i=0;i<n;i++)
        {
            cout<<input[i]<<" ";
        }
        cout<<endl;
    }

    cout<<"Shorted Output : ";
    for(i=0;i<n;i++)
    {
        cout<<input[i]<<" ";
    }
    return 0;
}
