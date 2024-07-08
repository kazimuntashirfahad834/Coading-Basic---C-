#include <iostream>

using namespace std;
void bubbleSort(int arr[], int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){  // 85  6- 6 5  85
            int temp;
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
  }
  for(int i=0; i<n;i++){
    cout<<arr[i]<<" ";
  }
}

int main()
{
    int n;
    cout<<"Enter the array size: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubbleSort(arr, n);
    return 0;
}
