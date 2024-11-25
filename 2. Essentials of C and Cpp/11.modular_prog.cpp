#include <iostream>
using namespace std;


int area(int l , int b){
    return (l * b);
}

int perimeter(int l , int b){
    return 2 * (l + b);
}

int main()
{
    int len = 0, bre = 0;
    cout << "Enter the length of the rectangle: ";
    cin >> len;
    cout << "Enter the breadth of the rectangle: ";
    cin >> bre;

    int ar = area(len,bre);
    cout << "The area of the rectangle is: " << ar <<endl;

    int peri = perimeter(len,bre);
    cout << "The perimeter of the rectangle is: " << peri;

    return 0;
}