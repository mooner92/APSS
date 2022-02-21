#include <iostream>
using namespace std;

class circle{
    public:
    int radius;
    double getarea();

};

double circle::getarea(){
    return (3.14*3.14)*radius;

}

int main(){
    circle donut;
    donut.radius = 1;
    double area = donut.getarea();
    cout << "area is = " << area << endl;

    circle pizza;
    pizza.radius = 3;
    area = pizza.getarea();
    cout << "area is = " << area <<endl;
}