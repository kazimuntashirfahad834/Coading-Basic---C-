#include <iostream>

using namespace std;

int main()
{
    int i, n;
    bool prime = true;

    cout << "Enter Integer Number: ";
    cin >> n;

    if (n == 0 || n == 1)
    {
        prime = false;
    }
    else
    {
        for (i = 2; i <= n / 2; ++i)
        {
            if (n % i == 0)
            {
                prime = false;
                break;
            }
        }
    }
    if (prime)
        cout << n << " \nPrime Number";
    else
        cout << n << " \nError! Not a Prime Number";
    return 0;
}
