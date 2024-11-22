#include <iostream>
using namespace std;

// method :1

// struct Rectangle
// {
//     int len;
//     int bre;
// } r1;

// int main()
// {
//     r1.len = 5;
//     r1.bre = 3;
//     cout << "Length of rectangle is " << r1.len << endl;
//     cout << "Breadth of rectangle is " << r1.bre << endl;

//     return 0;
// }


// //method:2

// struct Rectangle
// {
//     int len;
//     int bre;
// };

// int main()
// {

//     struct Rectangle r1;

//     r1.len = 5;
//     r1.bre = 3;
//     cout << "Length of rectangle is " << r1.len << endl;
//     cout << "Breadth of rectangle is " << r1.bre << endl;

//     return 0;
// }


//method:2

struct Rectangle
{
    int len;
    int bre;
};

    struct Rectangle r1;
    
int main()
{


    r1.len = 5;
    r1.bre = 3;
    cout << "Length of rectangle is " << r1.len << endl;
    cout << "Breadth of rectangle is " << r1.bre << endl;

    return 0;
}