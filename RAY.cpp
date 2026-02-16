#include <iostream>

#define PI 3.14159
using namespace std;
int main() {
    double radius, area, circumference;
    
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    
    cout << "Area of the circle: " << area << endl;
    cout << "Circumference of the circle: " << circumference <<endl;
    
    return 0;
}
