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
