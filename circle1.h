#include <iostream>
using namespace std;

class circle {
    public:
    int radius;
    circle();
    circle(int r);
    double getarea();
};

circle::circle(){
    radius=1;
    cout << "make a circle radius " << radius << endl;

}

circle::circle(int r) {
    radius = r;
    cout << "make a circle radius " << radius << endl;
}

double circle::getarea(){
    return 3.14*3.14*radius;
}

