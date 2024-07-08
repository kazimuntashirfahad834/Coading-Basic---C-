#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n)
{
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n-i-1;j++)
     {
       if(arr[j]>arr[j+1])
        {
            int temp;
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
     }
  }

 cout<<"Sorted Array =  ";
   for(int i=0; i<n;i++)
     {
     cout<<arr[i]<<" ";
     };

}


int BinarySearch(int A[], int arrayLength, int value,int *comm)
{
    int first, last, mid;
    first = 0;
    last = arrayLength - 1;
    while(first<=last)
    {
        ++*comm;
        mid = (first+last)/2;
        if(A[mid] == value)
        {

            return mid;
        }
        else if(A[mid]<value)
        {
            first = mid+1;
        }
        else if(A[mid]>value)
        {
            last = mid-1;
        }
    }
    return -1;
}

int main()
{
    int n,value,index,comm=0;
    cout<<"Enter the array size = ";
    cin>>n;
    int arr[n];
    cout<<"Random Input Array = ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubbleSort(arr, n);
    cout<<endl;
    cout<<"Number to search = ";
    cin>>value;
    index=BinarySearch(arr,n,value,&comm);
if(index!=-1)
{
    cout<<value <<" found at index "<<index<<" in the sorted array"<<endl;
}
else
{
 cout<<value <<" not found in the array "<<endl;
}
cout<<"Number of comparisons = "<<comm<<endl;;

 return 0;
}
