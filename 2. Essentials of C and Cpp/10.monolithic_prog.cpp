#include <iostream>
using namespace std;
int main()
{
    int len = 0, bre = 0;
    cout << "Enter the length of the rectangle: ";
    cin >> len;
    cout << "Enter the breadth of the rectangle: ";
    cin >> bre;

    int area = len * bre;
    cout << "The area of the rectangle is: " << area <<endl;

    int peri = 2 * (len + bre);
    cout << "The perimeter of the rectangle is: " << peri;

    return 0;
}