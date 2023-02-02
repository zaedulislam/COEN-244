#include <iostream>
using namespace std;


int main ()
{
    int x[5] = {4, 3, 23, 66, 34};
    int *p = x;

    cout << "& of x: " << x << endl;
    cout << "p: " << p << endl;
    cout << "Dereference operator *p: " << *p << endl;

    cout << "*p++: " << *p++ << endl;
    cout << "*++p: " << *++p << endl;
    cout << "++*p: " << ++*p << endl;
    cout << "(*p)++: " << (*p)++ << endl;


    int n = 11, m = 19;
    int *a = &n;
    int *b = &m;

    *a++ = *b++;

    cout << "a: " << a << endl;
    cout << "*a: " << *a << endl;
    a--;
    cout << "*a: " << *a << endl;
    cout << "b: " << b << endl;


    *a = *b;

    cout << "*a: " << *a << endl;
    ++a;
    ++b;


    return 0;
}
