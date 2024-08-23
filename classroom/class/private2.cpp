#include <bits/stdc++.h>
using namespace std;

class Circle {
private:
    double radius;

public:
    
    void set_radius(double r) {
        radius = r;
    }

    void compute_area() {
        double area = 3.14 * radius * radius;
        cout << "Radius: " << radius << endl;
        cout << "Area: " << area << endl;
    }
};

int main() {
    Circle obj;
    obj.set_radius(5.5);  
    obj.compute_area();    
    return 0;
}
