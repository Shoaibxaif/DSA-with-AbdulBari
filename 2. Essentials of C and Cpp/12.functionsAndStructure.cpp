#include <iostream>
using namespace std;

struct Reactangle{
    int length;
    int width;
};

int area(Reactangle r){
    return (r.length*r.width);
}

int perimeter(Reactangle r){
    return 2 * (r.length+r.width);
}

int main()
{
    struct  Reactangle r={0,0};
  
    cout << "Enter the length of the rectangle: ";
    cin >> r.length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> r.width;

    int ar = area(r);
    cout << "The area of the rectangle is: " << ar <<endl;

    int peri = perimeter(r);
    cout << "The perimeter of the rectangle is: " << peri;

    return 0;
}