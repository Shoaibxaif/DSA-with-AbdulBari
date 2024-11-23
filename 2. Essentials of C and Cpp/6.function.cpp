#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int x = 5;
    int y = 12;
    int result = add(x, y);
    cout << "The sum of " << x << " and " << y << " is " << result << endl;

    return 0;
}