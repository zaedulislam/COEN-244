#include <iostream>
using namespace std;


int main ()
{
   int numbers[5];
   int *p;
   p = numbers;
   *p = 10;
   cout << p << endl;

   for(int i = 0; i < 5; i++)
       cout << numbers[i] << " ";
   cout << endl;

   p++;
   cout << p << endl;
   *p = 20;

   for(int i = 0; i < 5; i++)
       cout << numbers[i] << " ";
   cout << endl;


   p = &numbers[2];  *p = 30;
   p = numbers + 3;  *p = 40;
   p = numbers;  *(p+4) = 50;
   for (int n=0; n<5; n++)
       cout << numbers[n] << ", ";

    return 0;
}
