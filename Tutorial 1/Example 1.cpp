#include <iostream>
using namespace std;


class Car {
    private:
        int wheels;
        string color;
    
    public:
        Car(int w, std::string c) { // constructor with parameters
            wheels = w;
            color = c;
        }
    
        void setColor(std::string c) {
            color = c;
        }
    
        string getColor() {
            return color;
        }
    
        int getWheels() {
            return wheels;
        }
};


int main() {
    Car car1(4, "red");
    Car car2(4, "blue");

    cout << "Car 1 color: " << car1.getColor() << endl;
    cout << "Car 2 color: " << car2.getColor() << endl;

    car1.setColor("green");
    car2.setColor("yellow");

    cout << "Car 1 color: " << car1.getColor() << endl;
    cout << "Car 2 color: " << car2.getColor() << endl;
}
