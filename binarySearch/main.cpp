#include <iostream>

using namespace std;

int main()
{

    int input[100], start=0, end=0, mid=0, item=0, i=0, n=0, loc=-1;

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>input[i];
    }
    end=n-1;
    for(int j=0; j<100;j++)
    {
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
        }else if (item<input[mid])
        {
            end=mid-1;
        }else if (item>input[mid])
        {
            start=mid+1;
        }
    cout<<start<<" , "<<end<<endl;
    }
    if(loc==-1)
    {
     cout<<"Data not found"<<endl;
    }else
    {
     cout<<"Data found at index: "<<loc<<endl;
    }

    }
    return 0;
}
