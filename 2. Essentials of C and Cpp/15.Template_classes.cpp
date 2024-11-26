//Method-1

// #include<iostream>
// using namespace std;

// template <class T>
// class Arithametic
// {
// private:
//     T a;
//     T b;
// public:
//     Arithametic(T a, T b);
//     T add();
//     T sub();
// };

// template <class T>
// Arithametic <T> :: Arithametic(T a, T b){
//     this->a = a;
//     this->b = b;
// }

// template <class T>
// T Arithametic <T> :: add(){
//     return a + b;
// }
// template <class T>
// T Arithametic <T> :: sub(){
//     return a - b;
// }


// int main()
// {
//     Arithametic <int> a1(10, 5);
//     cout << a1.add() << endl;
//     cout << a1.sub() << endl;
//     Arithametic <float> a2(1.5, 1.2);
//     cout << a2.add() << endl;
//     cout << a2.sub() << endl;

    
// return 0;
// }

// Method - 2

#include <iostream>
using namespace std;

template <class T>
class Arithmetic {
private:
    T a, b;

public:
   Arithmetic(T x, T y) {
        a = x;
        b = y;
    }

    T add() { return a + b; } // Inline member function
    T sub() { return a - b; } // Inline member function
};

int main() {
    Arithmetic<int> a1(10, 5);
    cout << a1.add() << endl;
    cout << a1.sub() << endl;

    Arithmetic<float> a2(1.5, 1.2);
    cout << a2.add() << endl;
    cout << a2.sub() << endl;

    return 0;
}
