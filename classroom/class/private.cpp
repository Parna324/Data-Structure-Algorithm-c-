#include<bits/stdc++.h>
using namespace std;
class circle{
    private:
    double radius;
    public:
    void compute_area(double r){
        radius=r;
        double area = 3.14*radius*radius;
        cout << "Radius: " << radius << endl;
        cout << "Area: " << area;
        
    }
};
int main(){
    circle obj;
    obj.radius=5.5;
    obj.compute_area(1.5);
    return 0;
}