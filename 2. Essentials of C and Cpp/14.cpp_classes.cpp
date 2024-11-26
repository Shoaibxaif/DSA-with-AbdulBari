#include<iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;
    public:
    Rectangle(){ length = breadth = 1;}
    Rectangle(int l , int b){
        length = l;
        breadth = b;
    }
    int area(){
        return length * breadth;
    }
    int perimeter(){
        return 2 * (length + breadth);
    }
    int getLength(){
        return length;
    }
    void setLength(int l){
        length = l;

    }

};

int main()
{
    Rectangle r1(10,5);
    Rectangle r2(20,10);
    cout<<"Area of r1 is "<<r1.area()<<endl;
    cout<<"Perimeter of r1 is "<<r1.perimeter()<<endl;
    cout<<"Area of r2 is "<<r2.area()<<endl;
    cout<<"Perimeter of r2 is "<<r2.perimeter()<<endl;
    r1.setLength(15);
    cout<<"Area of r1 after changing length is "<<r1.area()<<endl;
    return 0;
    

    
return 0;
}