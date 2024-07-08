#include <iostream>

using namespace std;

int main()
{
   int number;
   int start,ending;

   cout << "Starting Value: ";
   cin >> start;

   cout << "Ending Value: ";
   cin >> ending;

   cout << "Odd Numbers Between: ";
   for(number = start;number <= ending; number++)

   if(number % 2 !=0)
             cout << number<< " ";

    return 0;
}
