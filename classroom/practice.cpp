//write a cpp code using classes and obj to check even odd,prime or not,armstrong
#include <iostream>
using namespace std;
class Shape{
    public:
    float area1(float r){
        return 3.14 *r*r;
    }
    float area2(float b,float h){
        return 0.5 *b*h;
    }
    float area(float l,float b){
        return l*b;
    }
};
int main(){
    Shape shape;
    float areacircle;
    float areatriangle;
    float arearectangle;
    areacircle= shape.area1(5.0);
    areatriangle=shape.area2(23.4,45.6);
    arearectangle= shape.area(1.3,3.21444);
    cout<<"Area of circle: " << areacircle<<endl;
    cout<<"Area of tri: " << areatriangle<<endl;
    cout<<"Area of rec: " << arearectangle<<endl;



    




    
}
