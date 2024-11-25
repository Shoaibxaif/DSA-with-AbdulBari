#include <iostream>
using namespace std;

class Reactangle
{
    public:
    int length;
    int width;

    int initialize (int l , int b){
        length = l ;
        width = b ;
    }

    int area( )
    {
        return (length * width);
    }

    int perimeter()
    {
        return 2 * (length + width);
    }


} ;
int main()
{
     Reactangle r;

     int l,b;

    cout << "Enter the length of the rectangle: ";
    cin >> l;
    cout << "Enter the breadth of the rectangle: ";
    cin >> b;

    r.initialize(l,b);

    int ar = r.area();
    cout << "The area of the rectangle is: " << ar << endl;

    int peri = r.perimeter();
    cout << "The perimeter of the rectangle is: " << peri;

    return 0;
}