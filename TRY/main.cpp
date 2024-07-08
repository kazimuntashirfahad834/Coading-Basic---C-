#include <iostream>

using namespace std;

int main()

{
    int input[100], i=0, n=0, pass=0, temp=0, start=0, end=0, mid=0, item=0, loc=-1;
    cout<<"Enter the Array Size =";
    cin>>n;
//Bubble Sort
    for(i=0;i<n;i++)
        {
            cout<<"Random Values =";
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
        cout<<"Shorted Output : "<<endl;
    for(i=0;i<n;i++)
        {
            cout<<input[i]<<" ";
        }

//Binary Search
    for(int j=0; j<100;j++)
        {
            cout<<"Enter Number to Search = ";
            cin>>item;
            loc=-1;
            start=0;
            end=n-1;
            cout<<start<<" , "<<end<<endl;
    while(start<=end)
        {
             mid=int((start+end)/2);
    cout<<mid<<"Value: "<<input[mid]<<endl;
    if(item==input[mid])
        {
            loc=mid;
            break;
        }
     else if (item<input[mid])
        {
            end=mid-1;
        }
     else if (item>input[mid])
        {
            start=mid+1;
        }
            cout<<start<<" , "<<end<<endl;
        }
    if(loc==-1)
        {
            cout<<"Data not found"<<endl;
        }
    else
        {
            cout<<"Data found at index: "<<loc<<endl;
        }
        }
        return 0;
}
