#include <iostream>
using namespace std;
int main()
{   int count[20],key[20],n=10,m;
    int i,j,k,temp;
    cout<<"Enter The Size Of Array : ";
    cin>>n;
    int a[n];
    cout<<"Enter The Elements in Array : ";
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<n; i++)
        for(j=0; j<n-1; j++)
        {   if(a[j]>a[j+1])
            {   temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }

    for(i=0,k=0; i<n; k++)
    {   count[k]=0;
        key[k]=a[i];
        for(j=i; j<n; j++)
        {   if(a[i]==a[j])
                count[k]++;
        }
        i=i+count[k];
    }
    for(i=0; i<k; i++)
        cout<<endl<<key[i]<<" Occurred = "<<count[i]<<" Times\n";
    return 0;
}
