#include <iostream>

using namespace std;

int main()

{   int arr[20]={8,4,6,1,6,9,6,1,9,8};

    int n=10;
    int a, b=0;

    cout<<"Array_1 = ";

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\nInput a number to search: ";
    cin>>a;

    for(int i=0; i<n; i++){
            if(arr[i]==a){
                b++;
            }
    }
    cout<<endl<<"The number occurs "<<b<<" times in the array";
    return 0;
}
