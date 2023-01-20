#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double MY_DOUBLE_VALUE = 5.12345678987;

    float MY_FLOAT_VALUE = 5.12345678987;

    cout << setprecision(12);
    cout << MY_DOUBLE_VALUE << endl; // 5.12345678987
    cout << MY_FLOAT_VALUE << endl; // 5.12345695496
  
  
    cout << "float: " << sizeof(float) << endl; // float: 4
    cout << "double: " << sizeof(double) << endl;// double: 8
  
    return 0;
}
