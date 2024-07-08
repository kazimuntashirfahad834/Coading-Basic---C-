#include<iostream>
using namespace std;
int main ()
{
    int arr[10][10];
    int i=0, j=0, n=0, m=0;
    cout << "Enter Row and Column Number : ";
    cin >> n >> m;
    cout << "Enter Row and Column Value : ";
    for (i = 0; i < n; i++)
    for (j = 0; j < m; j++)
    cin >> arr[i][j];
    cout << "Regular Matrix : \n ";
    for (i = 0; i < n; i++)
    {
    for (j = 0; j < m; j++)
    cout << arr[i][j] << " ";
    cout << "\n ";
    }
    cout << "Transpose Matrix : \n ";
    for (i = 0; i < m; i++)
    {
    for (j = 0; j < n; j++)
    cout << arr[j][i] << " ";
    cout << "\n ";
    }
    return 0;
    }
